#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
signed char var_4 = (signed char)106;
unsigned long long int var_5 = 9490103960411011945ULL;
unsigned long long int var_7 = 7501994212632673920ULL;
signed char var_9 = (signed char)-79;
unsigned int var_12 = 3568106183U;
int zero = 0;
short var_13 = (short)-22717;
unsigned long long int var_14 = 16879263908965412545ULL;
unsigned char var_15 = (unsigned char)139;
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
