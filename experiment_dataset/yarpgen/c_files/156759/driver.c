#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17867173838638921407ULL;
signed char var_5 = (signed char)-57;
signed char var_9 = (signed char)-100;
signed char var_18 = (signed char)-48;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
unsigned int var_20 = 2256023711U;
void init() {
}

void checksum() {
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
