#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61546;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1852460638U;
unsigned char var_6 = (unsigned char)103;
signed char var_7 = (signed char)-98;
signed char var_8 = (signed char)-61;
int zero = 0;
unsigned char var_10 = (unsigned char)34;
unsigned char var_11 = (unsigned char)118;
unsigned short var_12 = (unsigned short)5216;
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
