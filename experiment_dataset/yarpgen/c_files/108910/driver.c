#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7112485955617727237ULL;
unsigned char var_2 = (unsigned char)242;
unsigned int var_3 = 401732546U;
long long int var_5 = 4542619354727017267LL;
unsigned short var_6 = (unsigned short)63207;
short var_7 = (short)28080;
short var_9 = (short)-16528;
int zero = 0;
unsigned char var_10 = (unsigned char)3;
long long int var_11 = 7847295089142448417LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
