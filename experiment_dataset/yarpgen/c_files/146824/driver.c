#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
long long int var_3 = 6945666584691772248LL;
unsigned long long int var_5 = 10423700765332712963ULL;
int var_7 = -670233617;
int zero = 0;
int var_10 = -1198531731;
short var_11 = (short)11488;
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
