#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_7 = 2062554296;
unsigned char var_11 = (unsigned char)120;
unsigned long long int var_14 = 17335233297410546922ULL;
unsigned int var_15 = 2481193151U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-23;
unsigned char var_19 = (unsigned char)144;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
