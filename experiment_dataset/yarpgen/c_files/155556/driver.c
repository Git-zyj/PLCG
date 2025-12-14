#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-57;
signed char var_5 = (signed char)44;
int var_8 = -274688404;
short var_9 = (short)12265;
int zero = 0;
unsigned int var_11 = 4183274013U;
unsigned char var_12 = (unsigned char)111;
signed char var_13 = (signed char)-116;
int var_14 = -159787696;
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
