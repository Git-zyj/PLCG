#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
long long int var_2 = -6328046348852051875LL;
int var_4 = 521004519;
_Bool var_5 = (_Bool)1;
long long int var_7 = -3426332504170602719LL;
unsigned int var_10 = 3574472509U;
unsigned char var_11 = (unsigned char)103;
long long int var_14 = 3664903283018103275LL;
long long int var_15 = -3130769551156654945LL;
long long int var_16 = 7876978566178906152LL;
long long int var_17 = -5060515506629172072LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8728634887136696225LL;
long long int var_22 = 1951409607336777161LL;
int var_23 = -600785308;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
