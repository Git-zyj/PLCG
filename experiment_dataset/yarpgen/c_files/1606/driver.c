#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11593;
short var_4 = (short)-10703;
unsigned long long int var_13 = 15049900789893291364ULL;
signed char var_16 = (signed char)-106;
int zero = 0;
short var_20 = (short)-15425;
unsigned int var_21 = 2211407990U;
unsigned long long int var_22 = 10964865671701509182ULL;
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
