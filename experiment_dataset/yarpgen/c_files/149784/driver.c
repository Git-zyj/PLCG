#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned char var_3 = (unsigned char)138;
unsigned int var_6 = 4052994672U;
signed char var_8 = (signed char)36;
unsigned char var_9 = (unsigned char)81;
int zero = 0;
signed char var_10 = (signed char)-60;
unsigned char var_11 = (unsigned char)133;
signed char var_12 = (signed char)-77;
signed char var_13 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
