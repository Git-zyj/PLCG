#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)101;
_Bool var_4 = (_Bool)0;
int var_8 = -543141820;
signed char var_10 = (signed char)-62;
int zero = 0;
signed char var_12 = (signed char)-108;
unsigned int var_13 = 1292905496U;
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
