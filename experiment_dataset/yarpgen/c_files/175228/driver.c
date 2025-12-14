#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3721993833674772525LL;
unsigned long long int var_7 = 7824649708815844112ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)9882;
signed char var_12 = (signed char)-70;
unsigned long long int var_13 = 2927979806767783439ULL;
signed char var_14 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
