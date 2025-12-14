#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12938;
short var_1 = (short)-29409;
int var_3 = 1803693417;
unsigned short var_5 = (unsigned short)43715;
unsigned long long int var_6 = 164899311126747783ULL;
long long int var_7 = -2783912328480730574LL;
int var_8 = 529002212;
int var_9 = 2040231913;
short var_10 = (short)28296;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
unsigned long long int var_13 = 14088568047085350940ULL;
unsigned int var_14 = 3347101792U;
unsigned char var_15 = (unsigned char)180;
signed char var_16 = (signed char)117;
unsigned short var_17 = (unsigned short)22795;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
