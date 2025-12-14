#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7431073066887623823LL;
unsigned long long int var_3 = 15755474908287115116ULL;
unsigned short var_7 = (unsigned short)27016;
short var_8 = (short)16808;
short var_14 = (short)9091;
int var_16 = -1822885756;
short var_17 = (short)26480;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
int var_19 = -2112625625;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
