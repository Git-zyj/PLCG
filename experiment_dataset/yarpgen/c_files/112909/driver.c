#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned long long int var_2 = 1889101707575258624ULL;
unsigned char var_5 = (unsigned char)123;
unsigned long long int var_8 = 13989628406244271240ULL;
int var_11 = -299228769;
int zero = 0;
unsigned char var_12 = (unsigned char)30;
unsigned char var_13 = (unsigned char)190;
void init() {
}

void checksum() {
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
