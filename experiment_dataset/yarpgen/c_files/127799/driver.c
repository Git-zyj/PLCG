#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
int var_4 = 491959687;
short var_6 = (short)8506;
unsigned long long int var_7 = 11888604024909867391ULL;
unsigned char var_8 = (unsigned char)225;
unsigned short var_9 = (unsigned short)2905;
unsigned int var_11 = 2660662642U;
int zero = 0;
unsigned int var_13 = 1858758377U;
short var_14 = (short)20313;
unsigned long long int var_15 = 7563752301031225847ULL;
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
