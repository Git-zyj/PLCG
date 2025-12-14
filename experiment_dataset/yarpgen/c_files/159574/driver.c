#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
long long int var_3 = 2667946769220947018LL;
unsigned int var_5 = 3289647565U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)4043;
short var_8 = (short)11819;
int zero = 0;
int var_12 = 1206290292;
unsigned char var_13 = (unsigned char)131;
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
