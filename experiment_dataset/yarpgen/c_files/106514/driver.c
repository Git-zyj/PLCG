#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned short var_2 = (unsigned short)55627;
_Bool var_4 = (_Bool)0;
short var_5 = (short)16251;
long long int var_6 = 6921631941718384422LL;
_Bool var_8 = (_Bool)1;
int var_13 = -1266395724;
unsigned int var_14 = 2059668744U;
int zero = 0;
signed char var_15 = (signed char)-126;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3084575151U;
int var_18 = 619228475;
void init() {
}

void checksum() {
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
