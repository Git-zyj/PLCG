#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13719395778166748970ULL;
signed char var_4 = (signed char)-124;
long long int var_10 = -6436887445291089721LL;
int var_14 = -1832685076;
int zero = 0;
int var_20 = -1211320372;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
