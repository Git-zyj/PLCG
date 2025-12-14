#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
unsigned long long int var_1 = 753550426961972731ULL;
unsigned int var_2 = 3311485979U;
long long int var_5 = 5563734600490326469LL;
unsigned int var_6 = 3446897473U;
short var_10 = (short)15038;
int zero = 0;
short var_14 = (short)705;
unsigned short var_15 = (unsigned short)62914;
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
