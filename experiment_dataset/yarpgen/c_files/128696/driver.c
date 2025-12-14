#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned short var_3 = (unsigned short)28218;
unsigned long long int var_5 = 9847798664723760520ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-126;
long long int var_8 = -2029831567796296507LL;
int var_10 = 35797139;
int zero = 0;
long long int var_14 = 6860638218230976210LL;
unsigned char var_15 = (unsigned char)39;
unsigned long long int var_16 = 634720821992758610ULL;
unsigned long long int var_17 = 18387422951198496019ULL;
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
