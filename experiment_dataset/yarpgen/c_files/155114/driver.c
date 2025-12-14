#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-83;
unsigned short var_4 = (unsigned short)52045;
signed char var_8 = (signed char)-18;
signed char var_9 = (signed char)70;
int zero = 0;
unsigned char var_12 = (unsigned char)117;
unsigned int var_13 = 1649122451U;
int var_14 = -804364119;
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
