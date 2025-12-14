#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5717;
short var_4 = (short)15146;
unsigned short var_7 = (unsigned short)28763;
unsigned short var_8 = (unsigned short)32684;
unsigned int var_10 = 479529274U;
short var_12 = (short)30;
int zero = 0;
short var_13 = (short)-20995;
unsigned int var_14 = 723378457U;
unsigned int var_15 = 2775488324U;
long long int var_16 = -2470768137967760803LL;
short var_17 = (short)31536;
short var_18 = (short)-13647;
unsigned short var_19 = (unsigned short)54205;
long long int var_20 = 705420557907958520LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
