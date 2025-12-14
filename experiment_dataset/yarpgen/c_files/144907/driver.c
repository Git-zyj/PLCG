#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2341894536485416904ULL;
unsigned long long int var_3 = 5377770850647828905ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-72;
unsigned long long int var_12 = 15564424201593439857ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)14;
_Bool var_16 = (_Bool)0;
int var_17 = -551265396;
void init() {
}

void checksum() {
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
