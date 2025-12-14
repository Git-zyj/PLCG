#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned short var_1 = (unsigned short)53879;
unsigned char var_3 = (unsigned char)56;
signed char var_10 = (signed char)-31;
unsigned short var_11 = (unsigned short)10835;
int zero = 0;
unsigned int var_12 = 961437780U;
unsigned int var_13 = 2056164882U;
unsigned int var_14 = 1905545032U;
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
