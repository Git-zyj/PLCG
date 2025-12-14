#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16919874657587469707ULL;
short var_8 = (short)19505;
short var_12 = (short)-17726;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)43121;
unsigned long long int var_19 = 2478136675941100097ULL;
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
