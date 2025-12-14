#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned char var_6 = (unsigned char)216;
signed char var_7 = (signed char)74;
long long int var_11 = -6537341552502985691LL;
int zero = 0;
unsigned char var_13 = (unsigned char)46;
long long int var_14 = -7778344438845451599LL;
unsigned short var_15 = (unsigned short)32944;
void init() {
}

void checksum() {
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
