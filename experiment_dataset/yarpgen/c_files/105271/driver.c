#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
_Bool var_3 = (_Bool)1;
unsigned int var_10 = 3457387727U;
int zero = 0;
short var_15 = (short)-20038;
unsigned long long int var_16 = 10379695711719758267ULL;
unsigned char var_17 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
