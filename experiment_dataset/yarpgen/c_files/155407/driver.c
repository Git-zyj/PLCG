#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 378661200U;
signed char var_2 = (signed char)-16;
long long int var_3 = 2208923817395988326LL;
unsigned long long int var_4 = 11647336542261360634ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3960764503U;
long long int var_7 = -3280774088945858417LL;
unsigned long long int var_8 = 9904939078790874694ULL;
signed char var_10 = (signed char)-13;
int var_12 = -1844138526;
long long int var_13 = -7163981793765865009LL;
int zero = 0;
unsigned char var_14 = (unsigned char)189;
signed char var_15 = (signed char)-58;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)117;
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
