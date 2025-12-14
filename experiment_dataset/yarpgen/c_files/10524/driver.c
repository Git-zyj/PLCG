#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_14 = (signed char)78;
long long int var_18 = -2426814713588543030LL;
int zero = 0;
unsigned long long int var_19 = 10138385738253600946ULL;
unsigned short var_20 = (unsigned short)41871;
unsigned short var_21 = (unsigned short)61819;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
