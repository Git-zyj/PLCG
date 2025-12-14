#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 16019086715004607059ULL;
signed char var_5 = (signed char)37;
long long int var_7 = 6404672365516960638LL;
unsigned short var_10 = (unsigned short)33218;
unsigned char var_12 = (unsigned char)88;
int zero = 0;
unsigned char var_16 = (unsigned char)131;
unsigned long long int var_17 = 7428537086492832063ULL;
long long int var_18 = 1357674492736129614LL;
void init() {
}

void checksum() {
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
