#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3299468524648127916LL;
unsigned int var_4 = 3854863998U;
unsigned long long int var_5 = 4004806644306821577ULL;
unsigned int var_6 = 3222329257U;
unsigned char var_12 = (unsigned char)209;
long long int var_13 = -3055343727509043639LL;
_Bool var_15 = (_Bool)0;
short var_17 = (short)-4457;
int zero = 0;
unsigned char var_18 = (unsigned char)30;
short var_19 = (short)28200;
unsigned short var_20 = (unsigned short)29334;
void init() {
}

void checksum() {
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
