#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)123;
unsigned short var_3 = (unsigned short)28936;
unsigned long long int var_5 = 10478948059766028415ULL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-126;
unsigned long long int var_11 = 5790641168906359972ULL;
unsigned char var_14 = (unsigned char)130;
int zero = 0;
long long int var_19 = -4488511894942514322LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
