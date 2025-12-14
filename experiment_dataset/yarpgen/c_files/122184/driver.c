#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 341620031;
signed char var_4 = (signed char)-106;
int var_5 = -866307046;
int var_6 = 245879347;
unsigned char var_8 = (unsigned char)14;
int zero = 0;
unsigned long long int var_10 = 4195190998857289381ULL;
unsigned int var_11 = 1231727855U;
unsigned long long int var_12 = 623779431288974245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
