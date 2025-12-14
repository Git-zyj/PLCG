#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
unsigned int var_5 = 1557778442U;
unsigned int var_6 = 3335427808U;
unsigned char var_8 = (unsigned char)16;
unsigned int var_9 = 2925368177U;
unsigned int var_10 = 2544985443U;
unsigned char var_11 = (unsigned char)174;
int zero = 0;
short var_12 = (short)-26461;
signed char var_13 = (signed char)114;
int var_14 = 730195281;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
