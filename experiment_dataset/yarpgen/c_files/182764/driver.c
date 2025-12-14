#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 33268307U;
signed char var_3 = (signed char)68;
unsigned int var_4 = 268964852U;
short var_6 = (short)3036;
unsigned int var_9 = 4261056802U;
long long int var_10 = 571542653129664134LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-19;
unsigned int var_14 = 418228893U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
