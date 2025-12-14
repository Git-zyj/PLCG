#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18403658114227920753ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)65;
int zero = 0;
signed char var_10 = (signed char)-9;
signed char var_11 = (signed char)102;
long long int var_12 = -3694208836504275456LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
