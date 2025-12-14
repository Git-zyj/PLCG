#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46725;
int var_3 = -2122928490;
int var_4 = 285699442;
long long int var_5 = 4659100209722579737LL;
signed char var_9 = (signed char)110;
unsigned long long int var_10 = 17128163262442921201ULL;
int zero = 0;
short var_13 = (short)5350;
unsigned short var_14 = (unsigned short)53135;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
