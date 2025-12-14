#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)74;
signed char var_7 = (signed char)-63;
unsigned int var_8 = 2215070767U;
unsigned short var_13 = (unsigned short)57090;
unsigned long long int var_15 = 15004701260538590316ULL;
int zero = 0;
signed char var_20 = (signed char)-19;
unsigned long long int var_21 = 6868573217109133528ULL;
unsigned short var_22 = (unsigned short)36777;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
