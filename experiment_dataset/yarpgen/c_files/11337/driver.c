#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3321675609454986287LL;
short var_3 = (short)-8205;
unsigned int var_8 = 1108490238U;
long long int var_9 = -643080691133823929LL;
int zero = 0;
long long int var_15 = 7217479083070447515LL;
signed char var_16 = (signed char)-24;
void init() {
}

void checksum() {
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
