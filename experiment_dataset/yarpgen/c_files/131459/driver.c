#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1753444459702534951ULL;
unsigned short var_3 = (unsigned short)27725;
short var_5 = (short)-713;
int var_10 = 1132508801;
_Bool var_11 = (_Bool)0;
int var_12 = -1641584649;
unsigned int var_13 = 31830856U;
signed char var_14 = (signed char)-105;
unsigned int var_16 = 3879084059U;
short var_17 = (short)-6003;
int zero = 0;
signed char var_18 = (signed char)-21;
long long int var_19 = 2388444899208416833LL;
signed char var_20 = (signed char)-14;
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
