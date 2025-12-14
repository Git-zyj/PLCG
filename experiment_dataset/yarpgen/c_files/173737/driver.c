#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8440056806914626671LL;
unsigned int var_1 = 3822086077U;
short var_3 = (short)31945;
unsigned long long int var_6 = 9917865801471563955ULL;
long long int var_7 = 5492040778892686249LL;
int var_8 = -1330930589;
signed char var_9 = (signed char)126;
long long int var_11 = 3544816570852266939LL;
unsigned char var_15 = (unsigned char)249;
int zero = 0;
int var_16 = 1184529534;
unsigned long long int var_17 = 14087336316161877173ULL;
int var_18 = -1656575656;
unsigned int var_19 = 964630284U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
