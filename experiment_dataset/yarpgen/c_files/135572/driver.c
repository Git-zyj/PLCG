#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 15573783254032503673ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)130;
unsigned long long int var_7 = 18388786946963494020ULL;
unsigned int var_10 = 441996655U;
signed char var_11 = (signed char)51;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-39;
unsigned long long int var_16 = 8555076438502669111ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 86924348U;
unsigned long long int var_21 = 8574966351175239514ULL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)20814;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
