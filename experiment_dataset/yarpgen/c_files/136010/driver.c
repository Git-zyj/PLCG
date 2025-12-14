#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17709207369726407426ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
signed char var_12 = (signed char)15;
unsigned short var_13 = (unsigned short)64165;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
