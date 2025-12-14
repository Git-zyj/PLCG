#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1013891320;
unsigned char var_6 = (unsigned char)68;
int var_8 = -834224711;
unsigned char var_12 = (unsigned char)20;
signed char var_15 = (signed char)-20;
int zero = 0;
int var_16 = -1055555325;
unsigned char var_17 = (unsigned char)57;
int var_18 = -2003499776;
short var_19 = (short)1324;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
