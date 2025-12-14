#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
unsigned short var_6 = (unsigned short)62700;
unsigned short var_7 = (unsigned short)50439;
unsigned char var_8 = (unsigned char)170;
signed char var_11 = (signed char)100;
signed char var_13 = (signed char)-70;
int zero = 0;
unsigned short var_15 = (unsigned short)26801;
unsigned short var_16 = (unsigned short)44222;
void init() {
}

void checksum() {
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
