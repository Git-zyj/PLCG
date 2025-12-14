#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29504;
_Bool var_3 = (_Bool)0;
int var_5 = -865826581;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 12513404882469499953ULL;
unsigned char var_16 = (unsigned char)170;
signed char var_17 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
