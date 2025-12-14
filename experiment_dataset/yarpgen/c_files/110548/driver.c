#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -822268514;
int var_4 = -787963418;
int var_8 = -573538766;
unsigned short var_15 = (unsigned short)22778;
int zero = 0;
unsigned char var_20 = (unsigned char)122;
unsigned long long int var_21 = 1031799907458879089ULL;
signed char var_22 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
