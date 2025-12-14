#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
unsigned char var_4 = (unsigned char)240;
unsigned char var_5 = (unsigned char)85;
unsigned short var_9 = (unsigned short)40355;
unsigned char var_10 = (unsigned char)135;
unsigned long long int var_11 = 11568290457561834459ULL;
unsigned char var_12 = (unsigned char)218;
unsigned long long int var_14 = 3141930592934393463ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)37520;
int var_16 = 995484294;
unsigned char var_17 = (unsigned char)31;
unsigned char var_18 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
