#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1371042222;
signed char var_2 = (signed char)-30;
signed char var_5 = (signed char)-5;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)192;
unsigned char var_20 = (unsigned char)185;
unsigned short var_21 = (unsigned short)14321;
signed char var_22 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
