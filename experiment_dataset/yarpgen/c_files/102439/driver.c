#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2987623083035277834LL;
long long int var_1 = 5379895387276397795LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)45097;
unsigned char var_4 = (unsigned char)59;
long long int var_6 = -1861499357345631653LL;
unsigned char var_9 = (unsigned char)119;
unsigned char var_10 = (unsigned char)139;
unsigned long long int var_11 = 14858371083379769117ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)152;
unsigned short var_13 = (unsigned short)6276;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
