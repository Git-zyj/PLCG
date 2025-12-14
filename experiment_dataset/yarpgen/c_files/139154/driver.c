#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7348470766802198614LL;
unsigned long long int var_3 = 14041016584041912884ULL;
unsigned long long int var_8 = 10750859349338374679ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)136;
int var_13 = 1102063182;
void init() {
}

void checksum() {
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
