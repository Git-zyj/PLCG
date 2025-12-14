#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6551022044441175723LL;
short var_1 = (short)19371;
long long int var_3 = -5697615468219134336LL;
short var_5 = (short)-24306;
short var_9 = (short)19515;
long long int var_10 = 692299927318355963LL;
int zero = 0;
long long int var_15 = 2844068016073871303LL;
int var_16 = 1522295864;
long long int var_17 = -925428390432182794LL;
signed char var_18 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
