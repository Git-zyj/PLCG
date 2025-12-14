#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2104935672U;
int var_5 = -1714868812;
long long int var_8 = 2064635660301979371LL;
int var_9 = -891890860;
int zero = 0;
unsigned char var_12 = (unsigned char)212;
signed char var_13 = (signed char)-30;
int var_14 = -760039213;
unsigned int var_15 = 2791217398U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
