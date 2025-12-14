#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5373766492988269157LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = 769229923;
int var_8 = -2103958982;
int zero = 0;
unsigned short var_10 = (unsigned short)55225;
unsigned char var_11 = (unsigned char)190;
int var_12 = 551961878;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
