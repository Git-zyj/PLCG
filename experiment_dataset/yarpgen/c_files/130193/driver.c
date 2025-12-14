#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14825857018257032605ULL;
long long int var_3 = -7553007612685849586LL;
signed char var_4 = (signed char)-117;
signed char var_6 = (signed char)119;
short var_7 = (short)18655;
unsigned long long int var_8 = 8151529382415956353ULL;
unsigned char var_10 = (unsigned char)168;
unsigned short var_11 = (unsigned short)40297;
int zero = 0;
signed char var_14 = (signed char)60;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)136;
int var_17 = 338138872;
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
