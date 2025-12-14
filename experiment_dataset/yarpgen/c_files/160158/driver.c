#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55537;
int var_4 = -463918472;
short var_6 = (short)-27049;
signed char var_7 = (signed char)-24;
unsigned int var_9 = 3283443978U;
int zero = 0;
long long int var_11 = -1780565639431754264LL;
long long int var_12 = -7924296585179416424LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
