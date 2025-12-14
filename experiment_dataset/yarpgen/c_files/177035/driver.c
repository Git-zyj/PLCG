#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1585709707U;
long long int var_3 = 6012628049097837761LL;
unsigned long long int var_5 = 3245636010444590758ULL;
long long int var_12 = -2976586923864691215LL;
unsigned long long int var_15 = 16302273856900552992ULL;
int zero = 0;
unsigned int var_18 = 708059240U;
unsigned short var_19 = (unsigned short)37851;
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
