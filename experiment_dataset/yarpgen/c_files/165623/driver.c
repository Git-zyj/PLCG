#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 198080985U;
unsigned int var_1 = 191272583U;
unsigned int var_2 = 4167201679U;
unsigned int var_3 = 1277041054U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1200847726U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1895305128U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 809991328U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 736950779U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3867903799U;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 2742373862U;
unsigned int var_26 = 2312114483U;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 915099338U;
unsigned int var_29 = 363916291U;
unsigned int var_30 = 1951934519U;
_Bool var_31 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
