#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -509682382;
unsigned char var_4 = (unsigned char)44;
signed char var_5 = (signed char)16;
unsigned short var_7 = (unsigned short)35192;
int zero = 0;
signed char var_10 = (signed char)-120;
unsigned char var_11 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
