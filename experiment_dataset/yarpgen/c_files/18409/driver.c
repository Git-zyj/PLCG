#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-221;
short var_8 = (short)-20310;
int zero = 0;
unsigned long long int var_11 = 1436557185342756484ULL;
unsigned long long int var_12 = 4095028081592177156ULL;
long long int var_13 = 4268153429644304664LL;
void init() {
}

void checksum() {
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
