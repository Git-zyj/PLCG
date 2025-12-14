#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)128;
signed char var_5 = (signed char)5;
unsigned char var_8 = (unsigned char)168;
int var_12 = -1001669319;
long long int var_13 = -7803527125325247867LL;
int zero = 0;
signed char var_14 = (signed char)-72;
signed char var_15 = (signed char)-104;
unsigned int var_16 = 2053464442U;
long long int var_17 = 4446338673267082122LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
