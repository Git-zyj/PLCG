#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5065735791489164946ULL;
short var_4 = (short)31676;
unsigned char var_5 = (unsigned char)124;
int zero = 0;
short var_11 = (short)31835;
unsigned char var_12 = (unsigned char)24;
unsigned char var_13 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
