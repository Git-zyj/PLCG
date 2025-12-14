#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-110;
short var_5 = (short)-28881;
unsigned char var_7 = (unsigned char)229;
short var_8 = (short)-2334;
long long int var_11 = -2355966770627101585LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-32;
short var_15 = (short)30384;
unsigned long long int var_16 = 12021645113394172776ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
