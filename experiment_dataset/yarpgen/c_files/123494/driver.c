#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned long long int var_1 = 8082202691940570602ULL;
unsigned int var_2 = 1245292082U;
unsigned int var_4 = 226036380U;
unsigned int var_5 = 4217051458U;
unsigned char var_6 = (unsigned char)232;
long long int var_10 = 4414325560265959377LL;
unsigned long long int var_11 = 17793236056322926759ULL;
long long int var_12 = 1793164595668074097LL;
unsigned char var_14 = (unsigned char)30;
int zero = 0;
long long int var_20 = 3579378850170388162LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1427932381U;
unsigned long long int var_23 = 13704670191349203849ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
