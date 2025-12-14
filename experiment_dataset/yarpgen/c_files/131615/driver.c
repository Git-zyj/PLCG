#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9140656831536753ULL;
unsigned short var_3 = (unsigned short)28438;
unsigned short var_5 = (unsigned short)23105;
signed char var_8 = (signed char)-16;
signed char var_11 = (signed char)69;
unsigned short var_12 = (unsigned short)1759;
unsigned short var_14 = (unsigned short)31904;
unsigned int var_15 = 3345582099U;
signed char var_16 = (signed char)-60;
short var_17 = (short)8002;
int zero = 0;
short var_20 = (short)-31931;
unsigned short var_21 = (unsigned short)49385;
unsigned char var_22 = (unsigned char)74;
int var_23 = -1275968185;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
