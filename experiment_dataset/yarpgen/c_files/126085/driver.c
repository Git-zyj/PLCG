#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6897614006808647517LL;
unsigned short var_9 = (unsigned short)63302;
unsigned short var_11 = (unsigned short)9245;
int var_16 = 314946189;
int zero = 0;
signed char var_19 = (signed char)10;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)16;
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
