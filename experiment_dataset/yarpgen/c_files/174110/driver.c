#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4896091606406263496LL;
unsigned int var_9 = 2600781545U;
long long int var_13 = 5704839535977380101LL;
unsigned short var_19 = (unsigned short)17287;
int zero = 0;
short var_20 = (short)-3448;
short var_21 = (short)-22422;
void init() {
}

void checksum() {
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
