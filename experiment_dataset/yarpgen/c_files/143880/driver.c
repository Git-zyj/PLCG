#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1129439530U;
long long int var_4 = 3642953127295300642LL;
int var_6 = -1249269452;
long long int var_13 = -1674106985929035360LL;
int zero = 0;
unsigned char var_15 = (unsigned char)80;
unsigned int var_16 = 3468390991U;
signed char var_17 = (signed char)-47;
signed char var_18 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
