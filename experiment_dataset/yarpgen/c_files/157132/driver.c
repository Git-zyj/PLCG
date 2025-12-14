#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3101721815598730720ULL;
unsigned long long int var_8 = 5857194774790072285ULL;
unsigned short var_10 = (unsigned short)45071;
int zero = 0;
unsigned short var_12 = (unsigned short)29;
unsigned short var_13 = (unsigned short)12035;
unsigned long long int var_14 = 2491009363560040941ULL;
void init() {
}

void checksum() {
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
