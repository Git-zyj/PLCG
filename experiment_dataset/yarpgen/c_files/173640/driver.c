#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15527;
short var_2 = (short)3644;
short var_3 = (short)11272;
unsigned long long int var_4 = 10538300566507414997ULL;
int var_5 = -478762169;
short var_11 = (short)-20497;
int zero = 0;
unsigned int var_15 = 3388758162U;
long long int var_16 = -6146244589661688848LL;
unsigned long long int var_17 = 7220356320275595677ULL;
unsigned int var_18 = 286400481U;
unsigned short var_19 = (unsigned short)4373;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
