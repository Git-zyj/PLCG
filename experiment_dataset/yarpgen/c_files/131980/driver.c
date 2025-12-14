#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)17389;
unsigned long long int var_7 = 12384289987962433403ULL;
short var_10 = (short)-15118;
short var_18 = (short)32047;
int zero = 0;
unsigned long long int var_19 = 8471747546252467340ULL;
short var_20 = (short)8593;
unsigned int var_21 = 2942587252U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
