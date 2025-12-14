#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
long long int var_5 = -3047640547881647734LL;
short var_15 = (short)26925;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
int var_21 = -333286847;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 10428916736758094105ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
