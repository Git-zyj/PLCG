#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46603;
_Bool var_3 = (_Bool)0;
int var_5 = -1210377855;
signed char var_7 = (signed char)-44;
unsigned short var_8 = (unsigned short)52251;
unsigned long long int var_11 = 4050806845112639688ULL;
int zero = 0;
unsigned int var_15 = 897802515U;
_Bool var_16 = (_Bool)1;
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
