#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27571;
unsigned int var_3 = 1511210598U;
unsigned int var_5 = 424039191U;
signed char var_6 = (signed char)-5;
unsigned char var_8 = (unsigned char)149;
short var_9 = (short)-5625;
unsigned long long int var_10 = 13661284270839550322ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)45411;
int var_14 = -280658240;
unsigned long long int var_15 = 7194461249660142741ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
