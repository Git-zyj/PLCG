#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2667446248U;
unsigned short var_1 = (unsigned short)35907;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 5893610176143906788ULL;
unsigned int var_5 = 249487958U;
signed char var_6 = (signed char)47;
unsigned long long int var_7 = 11352452194085789806ULL;
unsigned char var_8 = (unsigned char)27;
unsigned char var_9 = (unsigned char)82;
unsigned long long int var_11 = 6197798836935533732ULL;
long long int var_12 = -4940423064148635928LL;
int zero = 0;
unsigned long long int var_13 = 7163954337456586764ULL;
long long int var_14 = -119039367340913343LL;
int var_15 = -1370026746;
long long int var_16 = -7531868170705980703LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
