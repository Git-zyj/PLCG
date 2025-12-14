#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2544906346U;
unsigned int var_3 = 3237794742U;
unsigned long long int var_4 = 11038557791537064369ULL;
unsigned long long int var_5 = 14264830164816955907ULL;
long long int var_7 = -3140249495816861410LL;
short var_9 = (short)28114;
int zero = 0;
int var_10 = 872369072;
unsigned short var_11 = (unsigned short)12824;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
