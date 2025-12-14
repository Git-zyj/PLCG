#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
unsigned short var_3 = (unsigned short)23620;
short var_6 = (short)-29194;
signed char var_7 = (signed char)-84;
unsigned char var_8 = (unsigned char)241;
short var_9 = (short)12292;
unsigned long long int var_10 = 3024147280420957913ULL;
int var_11 = 1128907098;
int zero = 0;
short var_12 = (short)22007;
int var_13 = 1325696634;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
