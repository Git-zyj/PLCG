#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 137818226;
signed char var_1 = (signed char)24;
unsigned short var_4 = (unsigned short)54411;
unsigned long long int var_7 = 17879677505419636167ULL;
unsigned char var_10 = (unsigned char)206;
unsigned char var_11 = (unsigned char)191;
int var_12 = 403685651;
unsigned char var_13 = (unsigned char)241;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
unsigned long long int var_15 = 1579422962604537658ULL;
void init() {
}

void checksum() {
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
