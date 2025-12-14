#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1584267869U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-31;
unsigned int var_3 = 751043850U;
unsigned long long int var_4 = 16456110793937025057ULL;
unsigned char var_5 = (unsigned char)235;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-123;
signed char var_9 = (signed char)-63;
unsigned char var_11 = (unsigned char)235;
unsigned int var_12 = 3283175957U;
unsigned int var_13 = 388264663U;
int zero = 0;
signed char var_14 = (signed char)-56;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 709545580857207357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
