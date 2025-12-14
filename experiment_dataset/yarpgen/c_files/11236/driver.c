#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 866080728U;
unsigned int var_6 = 454592639U;
unsigned char var_9 = (unsigned char)5;
signed char var_13 = (signed char)-18;
unsigned long long int var_15 = 4594568964000260515ULL;
int zero = 0;
unsigned long long int var_18 = 13088185256697045820ULL;
short var_19 = (short)26915;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
