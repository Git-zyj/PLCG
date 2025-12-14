#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)15667;
unsigned short var_4 = (unsigned short)35907;
unsigned char var_6 = (unsigned char)221;
signed char var_8 = (signed char)-79;
unsigned long long int var_11 = 10492941850995067490ULL;
long long int var_12 = 1760797590449022151LL;
unsigned short var_13 = (unsigned short)43420;
int zero = 0;
signed char var_14 = (signed char)56;
unsigned short var_15 = (unsigned short)5724;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
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
