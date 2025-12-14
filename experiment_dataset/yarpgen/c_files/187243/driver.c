#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17459996233794044607ULL;
long long int var_3 = -3878472617319244766LL;
int var_6 = 1960778569;
unsigned char var_7 = (unsigned char)97;
long long int var_10 = -602425603126201493LL;
int zero = 0;
short var_16 = (short)15194;
unsigned char var_17 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
