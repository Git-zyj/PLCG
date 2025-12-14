#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3116377528U;
long long int var_9 = -2977563380361361720LL;
unsigned int var_10 = 1953341413U;
long long int var_12 = -8837246351773789797LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2137218799U;
long long int var_21 = 8456385158744393633LL;
void init() {
}

void checksum() {
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
