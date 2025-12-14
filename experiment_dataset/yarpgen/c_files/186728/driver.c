#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)32;
unsigned short var_5 = (unsigned short)37273;
long long int var_7 = -6019308397067838276LL;
signed char var_8 = (signed char)-90;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
unsigned int var_13 = 61527083U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1311889378U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
