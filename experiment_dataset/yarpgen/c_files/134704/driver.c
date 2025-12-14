#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1763169790738528416LL;
unsigned int var_2 = 3352108417U;
short var_3 = (short)-20444;
unsigned int var_6 = 1003702510U;
long long int var_8 = 8452558659635052069LL;
long long int var_9 = 102673202215697040LL;
int zero = 0;
long long int var_10 = 7612459810645632100LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 357246572U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
