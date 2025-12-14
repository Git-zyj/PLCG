#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
long long int var_3 = 8471999195115293856LL;
short var_4 = (short)12175;
unsigned short var_6 = (unsigned short)45563;
signed char var_11 = (signed char)-39;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-19;
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
