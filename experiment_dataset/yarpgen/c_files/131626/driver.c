#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4782302987665465631LL;
unsigned int var_2 = 2136499273U;
unsigned char var_3 = (unsigned char)121;
unsigned int var_5 = 973269311U;
unsigned int var_6 = 682429359U;
unsigned char var_8 = (unsigned char)192;
int var_9 = 1858258972;
unsigned int var_10 = 3616011347U;
int var_11 = -989024615;
long long int var_13 = 8852255581605487264LL;
int zero = 0;
int var_16 = 91200792;
unsigned char var_17 = (unsigned char)187;
unsigned int var_18 = 3799378875U;
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
