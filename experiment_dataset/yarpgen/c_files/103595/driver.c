#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14824;
unsigned long long int var_2 = 1529094268187503420ULL;
unsigned char var_4 = (unsigned char)87;
unsigned char var_5 = (unsigned char)37;
unsigned short var_6 = (unsigned short)23291;
int var_7 = 2067103947;
int var_8 = 724931013;
int var_9 = -996018387;
long long int var_10 = -1832128971815257594LL;
long long int var_11 = -4484302305406028348LL;
int zero = 0;
long long int var_12 = 1195611049846421078LL;
short var_13 = (short)-24594;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)12;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
