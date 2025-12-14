#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)9984;
unsigned char var_10 = (unsigned char)98;
unsigned char var_11 = (unsigned char)139;
int zero = 0;
long long int var_12 = -2604185092910799129LL;
signed char var_13 = (signed char)-66;
int var_14 = -526911500;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
