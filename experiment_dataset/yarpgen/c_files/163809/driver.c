#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36254;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 8118897093837180273ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3014014840U;
int var_12 = 1867114649;
unsigned int var_16 = 1135802694U;
signed char var_17 = (signed char)-78;
int var_18 = 187879397;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -106644561;
unsigned int var_22 = 3052106645U;
unsigned int var_23 = 300849010U;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
