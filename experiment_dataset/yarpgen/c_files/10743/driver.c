#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)137;
short var_6 = (short)-27051;
long long int var_8 = 7515735562113350944LL;
unsigned long long int var_9 = 18276090126747877349ULL;
long long int var_10 = 8276410689991688883LL;
signed char var_11 = (signed char)112;
int zero = 0;
short var_12 = (short)4832;
_Bool var_13 = (_Bool)1;
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
