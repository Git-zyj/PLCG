#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2297619096U;
unsigned long long int var_8 = 1358840549454500951ULL;
unsigned char var_13 = (unsigned char)201;
unsigned int var_14 = 1169716573U;
int zero = 0;
unsigned long long int var_18 = 16806056136460074407ULL;
unsigned short var_19 = (unsigned short)38556;
signed char var_20 = (signed char)-40;
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
