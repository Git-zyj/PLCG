#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
unsigned char var_2 = (unsigned char)190;
int var_3 = 1680788107;
unsigned char var_6 = (unsigned char)82;
int var_10 = 968785306;
int zero = 0;
unsigned long long int var_14 = 10744774452012098849ULL;
unsigned char var_15 = (unsigned char)197;
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
