#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)26;
unsigned long long int var_4 = 15268497220594471075ULL;
unsigned int var_5 = 1575865128U;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)62625;
unsigned char var_15 = (unsigned char)78;
signed char var_18 = (signed char)93;
unsigned char var_19 = (unsigned char)15;
int zero = 0;
unsigned long long int var_20 = 9317194043065390103ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
