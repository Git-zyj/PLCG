#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3092119856998463326LL;
int var_1 = -387002020;
short var_2 = (short)-23255;
short var_5 = (short)28813;
unsigned char var_6 = (unsigned char)133;
unsigned short var_8 = (unsigned short)4706;
long long int var_9 = -7784949577768281437LL;
signed char var_10 = (signed char)-35;
int zero = 0;
unsigned int var_12 = 1394749413U;
unsigned char var_13 = (unsigned char)127;
long long int var_14 = -4368434026938600395LL;
unsigned int var_15 = 3814114588U;
unsigned char var_16 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
