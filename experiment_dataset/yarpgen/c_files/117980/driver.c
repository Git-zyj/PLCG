#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
short var_7 = (short)-1996;
_Bool var_8 = (_Bool)1;
short var_9 = (short)996;
int zero = 0;
long long int var_10 = -4869667664600660618LL;
unsigned char var_11 = (unsigned char)252;
short var_12 = (short)4957;
long long int var_13 = 8567204558781744103LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
