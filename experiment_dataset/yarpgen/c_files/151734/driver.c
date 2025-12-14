#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 806339483;
int var_5 = -1174646432;
int var_13 = 330885304;
int zero = 0;
int var_18 = -265220083;
unsigned long long int var_19 = 6598076516954876250ULL;
unsigned long long int var_20 = 17349597525309229975ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
