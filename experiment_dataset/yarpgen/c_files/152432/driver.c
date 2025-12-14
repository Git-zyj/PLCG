#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
unsigned char var_1 = (unsigned char)102;
long long int var_6 = 2754955498511240775LL;
unsigned short var_8 = (unsigned short)43506;
signed char var_9 = (signed char)-125;
int zero = 0;
unsigned int var_11 = 3543471170U;
unsigned int var_12 = 783946974U;
int var_13 = -1774554364;
int var_14 = -428475954;
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
