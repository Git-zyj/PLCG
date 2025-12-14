#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)30;
signed char var_2 = (signed char)9;
signed char var_4 = (signed char)-57;
unsigned long long int var_8 = 14665685405562695550ULL;
unsigned short var_12 = (unsigned short)9963;
int zero = 0;
unsigned int var_13 = 4139341462U;
short var_14 = (short)3674;
void init() {
}

void checksum() {
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
