#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 720002144U;
int var_7 = 2146674909;
int zero = 0;
unsigned long long int var_18 = 18211637076417923184ULL;
signed char var_19 = (signed char)121;
unsigned int var_20 = 2830343038U;
short var_21 = (short)-22941;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
