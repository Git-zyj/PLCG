#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)236;
unsigned char var_6 = (unsigned char)123;
long long int var_8 = -8937271558705387465LL;
unsigned char var_9 = (unsigned char)173;
int zero = 0;
signed char var_12 = (signed char)-107;
unsigned char var_13 = (unsigned char)219;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
