#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54587;
short var_1 = (short)19824;
unsigned long long int var_9 = 9930575199323981441ULL;
short var_12 = (short)23821;
int zero = 0;
signed char var_19 = (signed char)70;
unsigned long long int var_20 = 7254785961104231897ULL;
unsigned short var_21 = (unsigned short)5460;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
