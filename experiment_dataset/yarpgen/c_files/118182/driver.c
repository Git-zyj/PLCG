#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14829;
unsigned int var_1 = 247118571U;
unsigned long long int var_3 = 14667001543055368917ULL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)78;
int var_9 = 1986097640;
unsigned short var_11 = (unsigned short)17274;
int zero = 0;
long long int var_13 = 5707943301199152012LL;
unsigned int var_14 = 2280177106U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
