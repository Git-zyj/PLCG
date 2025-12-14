#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4084994243991549148ULL;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)80;
short var_6 = (short)-18983;
unsigned long long int var_8 = 17589855235608411028ULL;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)192;
short var_14 = (short)1373;
int var_15 = -1537471057;
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
