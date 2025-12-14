#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)112;
unsigned char var_10 = (unsigned char)151;
unsigned long long int var_11 = 483315518771539014ULL;
int zero = 0;
int var_18 = 1213437935;
short var_19 = (short)-10391;
unsigned long long int var_20 = 9596923469572786295ULL;
long long int var_21 = -7470925518082250662LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
