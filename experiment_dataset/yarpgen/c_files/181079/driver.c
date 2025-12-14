#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)159;
unsigned short var_4 = (unsigned short)15279;
unsigned int var_6 = 1081804396U;
int var_9 = -1262089621;
int zero = 0;
unsigned long long int var_11 = 12625854152136629069ULL;
signed char var_12 = (signed char)-23;
signed char var_13 = (signed char)-48;
unsigned int var_14 = 1486025978U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
