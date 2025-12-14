#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8602035583820777664ULL;
unsigned short var_7 = (unsigned short)54473;
int zero = 0;
long long int var_14 = -92226170328331530LL;
unsigned char var_15 = (unsigned char)229;
unsigned long long int var_16 = 17425506427132942127ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
