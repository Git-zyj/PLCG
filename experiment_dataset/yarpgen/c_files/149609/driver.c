#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1900960972U;
unsigned int var_1 = 127266053U;
unsigned char var_2 = (unsigned char)206;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3295486934902826695LL;
unsigned short var_7 = (unsigned short)1122;
unsigned long long int var_8 = 5141124329978292020ULL;
unsigned long long int var_9 = 14647593185403213481ULL;
unsigned char var_10 = (unsigned char)230;
unsigned int var_11 = 4231315573U;
unsigned short var_13 = (unsigned short)61258;
int zero = 0;
unsigned int var_14 = 20059214U;
unsigned int var_15 = 3365527147U;
unsigned int var_16 = 2724257804U;
unsigned int var_17 = 4038719823U;
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
