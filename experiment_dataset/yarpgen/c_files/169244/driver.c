#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2132476770U;
long long int var_3 = 2035440887930846226LL;
unsigned short var_4 = (unsigned short)4417;
unsigned long long int var_9 = 11961752683145692970ULL;
unsigned long long int var_10 = 10703545942698268095ULL;
int zero = 0;
short var_12 = (short)-25272;
unsigned short var_13 = (unsigned short)37955;
short var_14 = (short)-22541;
void init() {
}

void checksum() {
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
