#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14276;
signed char var_1 = (signed char)27;
unsigned char var_3 = (unsigned char)106;
int var_4 = 1655442150;
unsigned int var_6 = 4069911962U;
signed char var_7 = (signed char)-23;
unsigned short var_8 = (unsigned short)53016;
unsigned long long int var_11 = 6101666247874792344ULL;
int zero = 0;
signed char var_17 = (signed char)-16;
unsigned short var_18 = (unsigned short)41787;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
