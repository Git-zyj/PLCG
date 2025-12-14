#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9302;
unsigned char var_8 = (unsigned char)181;
short var_13 = (short)-609;
int zero = 0;
unsigned int var_18 = 3693293766U;
short var_19 = (short)-23306;
int var_20 = 2106374191;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
