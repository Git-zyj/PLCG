#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30252;
_Bool var_2 = (_Bool)0;
long long int var_3 = -1019272585691554504LL;
signed char var_4 = (signed char)-120;
unsigned char var_6 = (unsigned char)96;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
signed char var_12 = (signed char)-106;
short var_13 = (short)1069;
unsigned long long int var_14 = 17605515434001304233ULL;
long long int var_15 = -1924738786476230851LL;
short var_16 = (short)11290;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
