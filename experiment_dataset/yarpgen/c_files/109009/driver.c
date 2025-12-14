#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31819;
int var_1 = -742677026;
signed char var_2 = (signed char)-100;
short var_5 = (short)10888;
short var_7 = (short)-13772;
short var_9 = (short)-27076;
int zero = 0;
signed char var_10 = (signed char)-60;
signed char var_11 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
