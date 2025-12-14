#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6972913707890942293LL;
long long int var_5 = -8948346958294009275LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 504520639U;
unsigned short var_9 = (unsigned short)10237;
unsigned short var_13 = (unsigned short)25708;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)165;
long long int var_17 = -5076508126976143325LL;
int zero = 0;
signed char var_18 = (signed char)87;
unsigned int var_19 = 3462141648U;
unsigned long long int var_20 = 14868725222864955398ULL;
unsigned long long int var_21 = 13970309899063223622ULL;
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
