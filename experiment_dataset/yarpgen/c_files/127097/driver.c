#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8077171446545103981LL;
short var_7 = (short)21576;
short var_13 = (short)-23956;
unsigned int var_18 = 3102110893U;
long long int var_19 = -1675302770399915640LL;
int zero = 0;
long long int var_20 = 8869994892392917868LL;
unsigned long long int var_21 = 3129966180430648014ULL;
unsigned short var_22 = (unsigned short)19323;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
