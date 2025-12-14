#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 986431489;
unsigned int var_2 = 290026016U;
int var_4 = 1123892063;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)255;
int var_8 = -100772971;
unsigned long long int var_9 = 10490592635812236823ULL;
short var_10 = (short)-2395;
int zero = 0;
unsigned char var_12 = (unsigned char)79;
unsigned long long int var_13 = 15766584687089492148ULL;
int var_14 = 1596602301;
signed char var_15 = (signed char)-93;
signed char var_16 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
