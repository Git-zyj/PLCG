#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1068110850;
int var_8 = 1786234295;
unsigned int var_11 = 3995438646U;
unsigned short var_13 = (unsigned short)9926;
int zero = 0;
signed char var_14 = (signed char)-34;
unsigned long long int var_15 = 10983495585141890355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
