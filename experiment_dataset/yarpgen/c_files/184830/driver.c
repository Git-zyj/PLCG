#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1619372858;
unsigned long long int var_2 = 17784437024008060824ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)211;
int var_6 = 1607423694;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)7765;
int zero = 0;
unsigned long long int var_10 = 15680043232665623749ULL;
unsigned int var_11 = 1519902473U;
unsigned char var_12 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
