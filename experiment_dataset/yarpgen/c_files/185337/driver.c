#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2386989950915663296LL;
unsigned char var_6 = (unsigned char)57;
int var_8 = -1117865701;
long long int var_9 = 1273286043916013460LL;
unsigned long long int var_12 = 15822826529997039931ULL;
unsigned short var_13 = (unsigned short)25994;
short var_15 = (short)28279;
int zero = 0;
signed char var_17 = (signed char)32;
unsigned char var_18 = (unsigned char)203;
unsigned char var_19 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
