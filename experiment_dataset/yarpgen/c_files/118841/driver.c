#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1320379000U;
unsigned int var_3 = 3093641094U;
_Bool var_6 = (_Bool)1;
int var_7 = 205566458;
_Bool var_8 = (_Bool)0;
int var_9 = -72523178;
unsigned int var_10 = 2924196150U;
int zero = 0;
unsigned char var_13 = (unsigned char)121;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)48;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
