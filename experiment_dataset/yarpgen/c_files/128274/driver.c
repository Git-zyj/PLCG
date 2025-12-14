#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63826;
short var_2 = (short)-12859;
unsigned char var_3 = (unsigned char)191;
unsigned short var_4 = (unsigned short)51739;
_Bool var_5 = (_Bool)0;
int var_9 = 927723077;
unsigned long long int var_11 = 4144844525898363039ULL;
int zero = 0;
unsigned long long int var_12 = 481508872492254867ULL;
unsigned char var_13 = (unsigned char)146;
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
