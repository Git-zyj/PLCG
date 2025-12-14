#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1043041180U;
long long int var_3 = 5374199271055271627LL;
unsigned int var_6 = 2020577842U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2351616919U;
unsigned char var_10 = (unsigned char)249;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3980877739U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)97;
unsigned long long int var_17 = 5631435529961572960ULL;
unsigned int var_18 = 600351662U;
int zero = 0;
unsigned short var_19 = (unsigned short)44439;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 880095631813232583ULL;
_Bool var_22 = (_Bool)0;
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
