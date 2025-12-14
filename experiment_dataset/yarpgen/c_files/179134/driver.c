#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2591104942U;
long long int var_1 = -1431981643411263702LL;
long long int var_2 = -71084494126119584LL;
long long int var_4 = -583298014837777589LL;
unsigned int var_5 = 2324388821U;
int var_6 = 593322442;
int var_8 = -1703855054;
unsigned long long int var_9 = 14838456148897918703ULL;
int zero = 0;
long long int var_11 = 7948849282703654381LL;
short var_12 = (short)23359;
void init() {
}

void checksum() {
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
