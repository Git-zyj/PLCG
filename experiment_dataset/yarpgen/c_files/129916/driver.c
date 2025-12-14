#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -664461433;
int var_1 = 1970513194;
unsigned int var_5 = 1411248116U;
long long int var_6 = -757177207866803193LL;
unsigned long long int var_7 = 6145975404075088066ULL;
int var_11 = -971256498;
int zero = 0;
short var_13 = (short)-27416;
unsigned short var_14 = (unsigned short)33503;
int var_15 = 1162812751;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
