#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 581194084;
unsigned long long int var_1 = 551359792320264264ULL;
unsigned char var_2 = (unsigned char)222;
long long int var_3 = -3547567210926506886LL;
int var_4 = -1980939625;
signed char var_6 = (signed char)5;
unsigned char var_7 = (unsigned char)149;
unsigned int var_8 = 2025702054U;
long long int var_9 = 4460311131744379780LL;
int zero = 0;
short var_10 = (short)11321;
long long int var_11 = 8262279044407819250LL;
int var_12 = 1095342432;
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
