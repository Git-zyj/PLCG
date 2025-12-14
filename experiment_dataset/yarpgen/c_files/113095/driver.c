#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_8 = 942108212U;
unsigned char var_10 = (unsigned char)96;
int var_13 = -2020617683;
int zero = 0;
unsigned long long int var_15 = 8482629270995688524ULL;
unsigned int var_16 = 3513765478U;
long long int var_17 = -5987531236584793811LL;
unsigned short var_18 = (unsigned short)54036;
signed char var_19 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
