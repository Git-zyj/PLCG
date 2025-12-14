#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26742;
unsigned long long int var_6 = 16632516180305390044ULL;
long long int var_7 = 2177655375036033900LL;
unsigned long long int var_9 = 6512690939330737948ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1132765524;
signed char var_16 = (signed char)122;
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
