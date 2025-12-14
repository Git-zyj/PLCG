#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)82;
signed char var_2 = (signed char)51;
unsigned char var_5 = (unsigned char)118;
unsigned short var_8 = (unsigned short)26319;
unsigned char var_11 = (unsigned char)31;
int zero = 0;
short var_15 = (short)18232;
unsigned char var_16 = (unsigned char)191;
void init() {
}

void checksum() {
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
