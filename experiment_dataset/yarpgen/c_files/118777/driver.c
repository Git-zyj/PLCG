#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28987;
unsigned short var_3 = (unsigned short)55496;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 2720355508U;
unsigned int var_15 = 322656979U;
int var_16 = 1657337739;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_20 = -569736417;
int var_21 = -377881555;
signed char var_22 = (signed char)-58;
unsigned char var_23 = (unsigned char)243;
unsigned int var_24 = 2268569894U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
