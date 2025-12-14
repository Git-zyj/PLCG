#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31865;
int var_2 = 207538206;
int var_3 = 630333871;
signed char var_4 = (signed char)24;
signed char var_5 = (signed char)-79;
signed char var_6 = (signed char)-73;
int var_7 = 1843349774;
signed char var_8 = (signed char)46;
unsigned int var_9 = 366832259U;
int var_10 = -1663708648;
int zero = 0;
unsigned short var_11 = (unsigned short)37063;
signed char var_12 = (signed char)18;
unsigned int var_13 = 4133674011U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
