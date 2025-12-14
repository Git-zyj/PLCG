#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3497745999596240782LL;
unsigned long long int var_5 = 17081594064525028530ULL;
short var_8 = (short)-12602;
unsigned char var_17 = (unsigned char)216;
int zero = 0;
long long int var_18 = 5849640135587068167LL;
long long int var_19 = 7033262860597066159LL;
void init() {
}

void checksum() {
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
