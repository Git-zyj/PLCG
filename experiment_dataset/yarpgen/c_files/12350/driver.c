#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1743084130;
short var_1 = (short)-4601;
int var_4 = -2029895753;
unsigned char var_5 = (unsigned char)250;
unsigned long long int var_9 = 9275218323038354063ULL;
long long int var_10 = 2362733262296438992LL;
int zero = 0;
short var_11 = (short)-24620;
unsigned char var_12 = (unsigned char)101;
signed char var_13 = (signed char)83;
int var_14 = -1875380341;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
