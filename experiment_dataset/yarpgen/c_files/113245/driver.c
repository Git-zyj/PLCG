#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6491042931749904191ULL;
unsigned char var_3 = (unsigned char)144;
unsigned short var_8 = (unsigned short)19919;
signed char var_18 = (signed char)5;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2908638660U;
long long int var_22 = 2833435701736251851LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
