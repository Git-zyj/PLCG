#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2546684976377956840LL;
unsigned short var_7 = (unsigned short)31979;
int var_9 = 218965915;
int var_15 = -1619259853;
signed char var_16 = (signed char)-110;
int zero = 0;
unsigned short var_19 = (unsigned short)6069;
unsigned char var_20 = (unsigned char)218;
unsigned short var_21 = (unsigned short)61051;
void init() {
}

void checksum() {
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
