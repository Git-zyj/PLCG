#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 13362517501358169293ULL;
short var_3 = (short)19502;
unsigned short var_4 = (unsigned short)4923;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)26630;
unsigned short var_11 = (unsigned short)9203;
signed char var_16 = (signed char)-18;
unsigned int var_18 = 1649838304U;
int zero = 0;
int var_19 = 414864951;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-30382;
unsigned long long int var_22 = 738581140471712844ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
