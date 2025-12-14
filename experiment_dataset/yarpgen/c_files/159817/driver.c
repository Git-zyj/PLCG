#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5056622710394582003LL;
unsigned short var_4 = (unsigned short)144;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 14144316636816207408ULL;
int var_11 = -21821187;
unsigned short var_12 = (unsigned short)13384;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
