#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50086;
unsigned char var_2 = (unsigned char)127;
long long int var_6 = 6308241735339122750LL;
unsigned char var_7 = (unsigned char)179;
long long int var_8 = 4772349112302039507LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 849127393;
int var_11 = -212533092;
unsigned int var_12 = 4187621962U;
short var_13 = (short)26285;
int var_14 = 1559687339;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
