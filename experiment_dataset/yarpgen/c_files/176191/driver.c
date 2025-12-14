#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
unsigned int var_2 = 2029647538U;
short var_3 = (short)26125;
unsigned char var_5 = (unsigned char)206;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 3281192558733391659ULL;
_Bool var_13 = (_Bool)1;
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
