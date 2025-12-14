#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)121;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)24983;
unsigned short var_15 = (unsigned short)47463;
int zero = 0;
unsigned int var_18 = 3992007993U;
unsigned short var_19 = (unsigned short)47081;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
