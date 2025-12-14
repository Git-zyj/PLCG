#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-21685;
unsigned int var_5 = 1657987509U;
unsigned long long int var_7 = 4279217244141547082ULL;
unsigned long long int var_11 = 8532200879555755499ULL;
int zero = 0;
short var_12 = (short)-32225;
unsigned char var_13 = (unsigned char)98;
unsigned long long int var_14 = 7047544455038097923ULL;
unsigned long long int var_15 = 13253229468001672750ULL;
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
