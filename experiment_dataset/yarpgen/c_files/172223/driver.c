#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-123;
unsigned short var_5 = (unsigned short)53040;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-62;
int zero = 0;
unsigned short var_14 = (unsigned short)38425;
unsigned char var_15 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
