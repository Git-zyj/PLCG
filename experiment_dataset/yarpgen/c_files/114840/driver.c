#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
int var_2 = 1884008905;
_Bool var_3 = (_Bool)0;
short var_4 = (short)29112;
unsigned char var_5 = (unsigned char)230;
unsigned long long int var_7 = 2946902715672561103ULL;
short var_8 = (short)-15162;
unsigned long long int var_10 = 11190890522463330700ULL;
int zero = 0;
unsigned long long int var_11 = 9716591361104354039ULL;
unsigned short var_12 = (unsigned short)34618;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
