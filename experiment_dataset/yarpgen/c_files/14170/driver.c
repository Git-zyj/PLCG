#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
signed char var_2 = (signed char)-123;
long long int var_4 = 7961444345555437940LL;
unsigned long long int var_5 = 13602388067166426578ULL;
unsigned short var_6 = (unsigned short)43021;
unsigned int var_10 = 2692317874U;
signed char var_11 = (signed char)118;
int zero = 0;
long long int var_12 = -3694790637881378057LL;
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
