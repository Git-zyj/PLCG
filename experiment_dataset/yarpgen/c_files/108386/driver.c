#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6496753250767619109LL;
signed char var_1 = (signed char)-111;
long long int var_2 = 6791193970374558449LL;
long long int var_3 = -4960459372631518991LL;
unsigned char var_5 = (unsigned char)232;
unsigned char var_8 = (unsigned char)230;
short var_10 = (short)12082;
int zero = 0;
long long int var_12 = -4850288524293612543LL;
unsigned int var_13 = 159174238U;
unsigned long long int var_14 = 12322289110401860287ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
