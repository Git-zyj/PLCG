#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3050032662880593172ULL;
short var_3 = (short)-12734;
long long int var_12 = -2243425191951021879LL;
int zero = 0;
unsigned long long int var_17 = 969399177993368467ULL;
int var_18 = 1640274769;
unsigned short var_19 = (unsigned short)51447;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
