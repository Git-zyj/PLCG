#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1270125736323964315ULL;
unsigned short var_2 = (unsigned short)55199;
int var_3 = -203651731;
int var_8 = -309744848;
unsigned short var_10 = (unsigned short)50734;
long long int var_11 = 7297471299484807752LL;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-40;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 556423952;
unsigned char var_19 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
