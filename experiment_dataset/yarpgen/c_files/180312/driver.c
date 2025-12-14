#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9351;
unsigned long long int var_4 = 15716056250772479869ULL;
long long int var_9 = -894765242321904045LL;
unsigned long long int var_10 = 15777215554627506911ULL;
long long int var_11 = 2287084399177582090LL;
int zero = 0;
unsigned short var_12 = (unsigned short)8005;
int var_13 = -948949510;
unsigned long long int var_14 = 11542312737339568295ULL;
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
