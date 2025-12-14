#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9375;
unsigned int var_2 = 903794476U;
signed char var_3 = (signed char)94;
unsigned char var_4 = (unsigned char)176;
unsigned long long int var_6 = 14353771116743702645ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)24682;
unsigned short var_13 = (unsigned short)63958;
unsigned long long int var_14 = 18334867281401711913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
