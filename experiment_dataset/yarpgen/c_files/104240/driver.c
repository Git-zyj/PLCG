#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59835;
long long int var_2 = -8113634826308403864LL;
unsigned int var_3 = 657555084U;
int var_4 = -897285496;
long long int var_5 = -2597168683551239491LL;
signed char var_8 = (signed char)-22;
long long int var_10 = 1808804394561532366LL;
int zero = 0;
long long int var_12 = 2941946031105805288LL;
unsigned short var_13 = (unsigned short)14028;
short var_14 = (short)24712;
long long int var_15 = -743176151835732868LL;
short var_16 = (short)22284;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
