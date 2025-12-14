#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22107;
int var_6 = 729371566;
long long int var_7 = 2917029532780328629LL;
unsigned long long int var_14 = 12215441114590559254ULL;
int zero = 0;
long long int var_15 = 3197818606467431196LL;
int var_16 = -1559233349;
int var_17 = 301487926;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
