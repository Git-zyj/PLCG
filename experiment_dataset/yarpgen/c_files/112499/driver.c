#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)15;
unsigned char var_6 = (unsigned char)113;
signed char var_8 = (signed char)-118;
signed char var_9 = (signed char)-119;
int zero = 0;
unsigned char var_14 = (unsigned char)170;
unsigned short var_15 = (unsigned short)62794;
int var_16 = -1992960392;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
