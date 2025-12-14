#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2769725351438767528LL;
unsigned char var_1 = (unsigned char)73;
long long int var_3 = 5725079372489101792LL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 4190542815U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2758243566U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)31989;
int var_13 = -1764098445;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
