#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4908406359176243337LL;
unsigned short var_5 = (unsigned short)29863;
unsigned long long int var_11 = 3880859641271890993ULL;
signed char var_12 = (signed char)-119;
signed char var_13 = (signed char)-27;
int zero = 0;
long long int var_20 = 3548449039859575928LL;
unsigned int var_21 = 4088515871U;
void init() {
}

void checksum() {
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
