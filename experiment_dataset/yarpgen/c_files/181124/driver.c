#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
signed char var_1 = (signed char)-91;
unsigned char var_3 = (unsigned char)217;
unsigned long long int var_5 = 8992959360330694974ULL;
unsigned char var_6 = (unsigned char)226;
signed char var_8 = (signed char)-116;
unsigned int var_9 = 3641618128U;
signed char var_12 = (signed char)-120;
int zero = 0;
short var_13 = (short)-2509;
unsigned long long int var_14 = 10651519547141922477ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
