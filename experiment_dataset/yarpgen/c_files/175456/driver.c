#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 6018800757219708060ULL;
unsigned int var_3 = 145933717U;
unsigned char var_7 = (unsigned char)162;
long long int var_8 = -1902727881715008400LL;
unsigned long long int var_9 = 1075589304079119351ULL;
short var_14 = (short)-16241;
int zero = 0;
long long int var_15 = -2328802917655133864LL;
long long int var_16 = -2918053971405906740LL;
unsigned short var_17 = (unsigned short)54544;
void init() {
}

void checksum() {
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
