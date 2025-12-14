#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
signed char var_3 = (signed char)-102;
unsigned long long int var_4 = 14003949038157269561ULL;
unsigned short var_7 = (unsigned short)30664;
unsigned char var_8 = (unsigned char)128;
int zero = 0;
int var_10 = 821997981;
_Bool var_11 = (_Bool)1;
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
