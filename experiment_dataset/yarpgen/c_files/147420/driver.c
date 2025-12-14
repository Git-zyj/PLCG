#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 278546399U;
signed char var_2 = (signed char)111;
unsigned char var_4 = (unsigned char)150;
short var_7 = (short)-1204;
unsigned int var_9 = 2766051177U;
unsigned short var_13 = (unsigned short)39971;
signed char var_17 = (signed char)88;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -287071409217477182LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
