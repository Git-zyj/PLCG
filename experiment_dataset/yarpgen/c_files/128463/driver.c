#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)42103;
int var_3 = -851906316;
unsigned char var_4 = (unsigned char)229;
int var_5 = 2091529863;
int var_6 = -1593901961;
unsigned short var_7 = (unsigned short)45093;
unsigned short var_8 = (unsigned short)27699;
unsigned int var_9 = 3957541291U;
short var_10 = (short)-22618;
int zero = 0;
unsigned char var_11 = (unsigned char)84;
unsigned short var_12 = (unsigned short)15738;
unsigned int var_13 = 2294751505U;
unsigned long long int var_14 = 8168142762271730606ULL;
short var_15 = (short)-310;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
