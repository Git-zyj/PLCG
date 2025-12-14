#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19299;
short var_4 = (short)-335;
unsigned long long int var_10 = 5091171988052364702ULL;
int zero = 0;
signed char var_14 = (signed char)-19;
unsigned long long int var_15 = 3760476847883122815ULL;
int var_16 = -1129527742;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
