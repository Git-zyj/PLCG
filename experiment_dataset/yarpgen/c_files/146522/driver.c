#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-119;
signed char var_13 = (signed char)-13;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
unsigned long long int var_19 = 3104726708338445804ULL;
unsigned long long int var_20 = 14318658379086723810ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
