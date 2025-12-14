#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5869;
unsigned long long int var_4 = 17486630830779085919ULL;
signed char var_5 = (signed char)90;
signed char var_7 = (signed char)-41;
signed char var_13 = (signed char)-79;
short var_14 = (short)7708;
int zero = 0;
short var_15 = (short)9621;
long long int var_16 = 7954649734316790753LL;
long long int var_17 = -6881874337643510346LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
