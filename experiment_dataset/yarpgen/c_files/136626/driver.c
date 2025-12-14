#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)90;
unsigned long long int var_4 = 10875481345972240525ULL;
short var_6 = (short)-32301;
signed char var_7 = (signed char)123;
unsigned int var_12 = 2245535300U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 3690660612195465985ULL;
long long int var_17 = -8119727475864469452LL;
void init() {
}

void checksum() {
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
