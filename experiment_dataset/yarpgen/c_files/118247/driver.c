#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)151;
unsigned char var_3 = (unsigned char)226;
long long int var_4 = 2608103142118734741LL;
short var_6 = (short)13507;
unsigned char var_7 = (unsigned char)204;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)83;
int zero = 0;
short var_10 = (short)-5545;
long long int var_11 = -8170479517539808848LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
