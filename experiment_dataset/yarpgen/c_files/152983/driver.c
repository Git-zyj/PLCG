#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8900598714880285468ULL;
short var_3 = (short)9392;
long long int var_4 = 6566791758821316029LL;
short var_7 = (short)6313;
unsigned short var_15 = (unsigned short)28698;
int zero = 0;
unsigned int var_16 = 2106672037U;
unsigned short var_17 = (unsigned short)43958;
void init() {
}

void checksum() {
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
