#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 613710487;
short var_3 = (short)-19740;
signed char var_8 = (signed char)8;
signed char var_11 = (signed char)-29;
unsigned short var_12 = (unsigned short)19010;
unsigned short var_13 = (unsigned short)50159;
int zero = 0;
signed char var_15 = (signed char)-112;
unsigned long long int var_16 = 4953297542106078695ULL;
int var_17 = -1070676075;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
