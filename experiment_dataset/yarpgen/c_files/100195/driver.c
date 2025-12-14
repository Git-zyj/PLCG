#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned short var_3 = (unsigned short)17490;
short var_4 = (short)27833;
unsigned short var_5 = (unsigned short)42863;
unsigned int var_8 = 3486596263U;
int var_11 = 538466979;
unsigned char var_12 = (unsigned char)106;
unsigned char var_14 = (unsigned char)6;
int zero = 0;
unsigned short var_16 = (unsigned short)43348;
unsigned int var_17 = 3923408673U;
unsigned short var_18 = (unsigned short)18290;
unsigned long long int var_19 = 12863652524513430402ULL;
short var_20 = (short)14852;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
