#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5889673429124623473ULL;
unsigned char var_5 = (unsigned char)58;
signed char var_7 = (signed char)-90;
unsigned long long int var_9 = 13427410747020745577ULL;
signed char var_11 = (signed char)15;
unsigned long long int var_14 = 2035162765465262886ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -4682334803511831332LL;
void init() {
}

void checksum() {
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
