#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -203090673774451086LL;
unsigned short var_1 = (unsigned short)61388;
short var_2 = (short)-13803;
signed char var_4 = (signed char)-91;
_Bool var_5 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 355680985U;
short var_14 = (short)-27152;
int zero = 0;
signed char var_16 = (signed char)68;
short var_17 = (short)-4451;
signed char var_18 = (signed char)9;
unsigned int var_19 = 4270274875U;
unsigned char var_20 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
