#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 419535391489020464LL;
_Bool var_6 = (_Bool)0;
int var_7 = 108492362;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11854492914401918628ULL;
unsigned int var_20 = 768234168U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)59910;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
