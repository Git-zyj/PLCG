#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -22384847;
long long int var_8 = 7467440864281998954LL;
long long int var_14 = 401704701073708009LL;
int zero = 0;
int var_19 = -1122988569;
unsigned long long int var_20 = 11450918829361143682ULL;
int var_21 = -453242926;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
