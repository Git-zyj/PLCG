#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
signed char var_6 = (signed char)37;
signed char var_7 = (signed char)67;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 6454248025358214926ULL;
int var_13 = -1115768970;
int var_16 = -1240517613;
int zero = 0;
unsigned char var_20 = (unsigned char)152;
unsigned long long int var_21 = 7834185833794840810ULL;
void init() {
}

void checksum() {
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
