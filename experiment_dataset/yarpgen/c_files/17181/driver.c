#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62343;
unsigned long long int var_4 = 12295588115366721504ULL;
unsigned char var_5 = (unsigned char)24;
signed char var_6 = (signed char)31;
unsigned int var_9 = 3411810084U;
signed char var_11 = (signed char)-54;
int var_12 = 4352583;
int zero = 0;
int var_15 = 163691105;
int var_16 = -662630834;
int var_17 = 1101726540;
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
