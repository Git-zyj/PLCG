#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27510;
unsigned long long int var_8 = 14156364242876723409ULL;
short var_10 = (short)11092;
unsigned char var_12 = (unsigned char)218;
int zero = 0;
unsigned long long int var_14 = 9251943736520241333ULL;
signed char var_15 = (signed char)-35;
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
