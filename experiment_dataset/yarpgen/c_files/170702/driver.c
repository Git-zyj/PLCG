#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4488859905385693043LL;
long long int var_3 = 276257290480102632LL;
unsigned char var_4 = (unsigned char)243;
unsigned int var_7 = 3219672821U;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-19249;
int zero = 0;
signed char var_15 = (signed char)-46;
unsigned long long int var_16 = 9352680205673256236ULL;
void init() {
}

void checksum() {
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
