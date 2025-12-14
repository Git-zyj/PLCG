#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned char var_2 = (unsigned char)237;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 16274805950996391503ULL;
unsigned int var_9 = 4166515961U;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-3031;
unsigned int var_12 = 2511803709U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
