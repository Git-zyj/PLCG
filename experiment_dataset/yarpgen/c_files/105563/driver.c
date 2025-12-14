#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-20126;
long long int var_9 = 4135126121292380252LL;
unsigned int var_10 = 279474736U;
int var_11 = -1043985284;
unsigned int var_14 = 3703476412U;
int zero = 0;
unsigned int var_19 = 142102678U;
unsigned char var_20 = (unsigned char)95;
unsigned char var_21 = (unsigned char)32;
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
