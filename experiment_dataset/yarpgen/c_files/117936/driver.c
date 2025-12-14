#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42351;
unsigned short var_2 = (unsigned short)52411;
unsigned char var_3 = (unsigned char)63;
unsigned char var_6 = (unsigned char)159;
int var_11 = -1758603888;
int var_12 = -341992336;
unsigned char var_15 = (unsigned char)252;
short var_16 = (short)-5786;
signed char var_17 = (signed char)126;
int zero = 0;
unsigned short var_19 = (unsigned short)501;
int var_20 = -981476606;
int var_21 = 1726643669;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
