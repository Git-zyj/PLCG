#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3231;
signed char var_1 = (signed char)102;
long long int var_2 = 1286596776887704695LL;
long long int var_4 = 6752538184691938906LL;
signed char var_5 = (signed char)50;
signed char var_7 = (signed char)-54;
unsigned int var_8 = 876566993U;
int zero = 0;
unsigned char var_10 = (unsigned char)218;
signed char var_11 = (signed char)36;
long long int var_12 = -2196403035624787531LL;
signed char var_13 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
