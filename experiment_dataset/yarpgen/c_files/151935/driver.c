#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 743629341;
unsigned int var_11 = 1914758886U;
unsigned int var_18 = 715614038U;
short var_19 = (short)2328;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5597686216046524110LL;
unsigned short var_22 = (unsigned short)27645;
long long int var_23 = 4455029618933597876LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
