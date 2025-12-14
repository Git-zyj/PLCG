#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4991;
long long int var_4 = -6288621338086734364LL;
unsigned short var_5 = (unsigned short)42718;
signed char var_10 = (signed char)104;
unsigned long long int var_12 = 11618546546765628232ULL;
int zero = 0;
int var_13 = -1631470105;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14517327841508878195ULL;
unsigned long long int var_16 = 16202857700126169781ULL;
unsigned char var_17 = (unsigned char)91;
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
