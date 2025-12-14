#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10209721583748910705ULL;
unsigned short var_4 = (unsigned short)11000;
short var_6 = (short)-11675;
unsigned int var_11 = 3483214140U;
int zero = 0;
unsigned short var_14 = (unsigned short)45568;
unsigned long long int var_15 = 16122647988652045790ULL;
void init() {
}

void checksum() {
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
