#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-15547;
long long int var_16 = 1486652237210002274LL;
short var_17 = (short)-28098;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
signed char var_20 = (signed char)-73;
void init() {
}

void checksum() {
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
