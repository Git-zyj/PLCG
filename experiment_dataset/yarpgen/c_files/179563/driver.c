#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)153;
short var_9 = (short)-11723;
long long int var_10 = 1173789737289937734LL;
long long int var_15 = -6787487181495988819LL;
int zero = 0;
signed char var_16 = (signed char)-82;
unsigned char var_17 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
