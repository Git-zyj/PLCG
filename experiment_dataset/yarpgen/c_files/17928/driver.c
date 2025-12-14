#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -8157871770843111226LL;
int var_16 = 1332280874;
int zero = 0;
unsigned long long int var_17 = 10933850115573109465ULL;
long long int var_18 = 4321633285233676221LL;
unsigned char var_19 = (unsigned char)30;
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
