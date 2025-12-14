#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4981963292879944563ULL;
int var_1 = 1462401515;
unsigned long long int var_9 = 2589071011999388510ULL;
unsigned short var_10 = (unsigned short)32409;
int zero = 0;
unsigned int var_12 = 236907848U;
int var_13 = -1177938591;
short var_14 = (short)20218;
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
