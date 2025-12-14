#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14382;
unsigned short var_1 = (unsigned short)62826;
unsigned short var_2 = (unsigned short)62789;
long long int var_3 = 8325867659357653222LL;
unsigned int var_4 = 3035658818U;
unsigned int var_5 = 1956987421U;
unsigned short var_7 = (unsigned short)4310;
int var_8 = -576344842;
short var_10 = (short)-20960;
unsigned long long int var_11 = 986858378047595711ULL;
unsigned int var_12 = 1003756619U;
int zero = 0;
long long int var_13 = 2862709764808789166LL;
unsigned long long int var_14 = 6778483937396440146ULL;
unsigned short var_15 = (unsigned short)21145;
unsigned long long int var_16 = 3853781379707950756ULL;
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
