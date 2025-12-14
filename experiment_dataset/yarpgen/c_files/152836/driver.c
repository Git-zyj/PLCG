#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)43;
unsigned short var_3 = (unsigned short)1856;
int var_5 = 1114843248;
unsigned int var_6 = 1060794262U;
signed char var_7 = (signed char)-68;
long long int var_8 = -6367381617017744323LL;
long long int var_10 = 2489764732530625129LL;
int zero = 0;
int var_13 = 1234742935;
long long int var_14 = -1612701133177662746LL;
unsigned int var_15 = 3515607833U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
