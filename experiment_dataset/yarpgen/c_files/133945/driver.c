#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1378202240768135760LL;
signed char var_1 = (signed char)-52;
signed char var_4 = (signed char)-46;
long long int var_7 = -749117790447792373LL;
unsigned int var_9 = 3911093025U;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)32;
long long int var_15 = 1047346532124882244LL;
int var_16 = -1728305211;
short var_17 = (short)-25242;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
