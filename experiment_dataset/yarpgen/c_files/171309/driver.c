#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6194691780793064981LL;
short var_3 = (short)16418;
unsigned char var_11 = (unsigned char)20;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2875111835U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3868115726115294784LL;
signed char var_18 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
