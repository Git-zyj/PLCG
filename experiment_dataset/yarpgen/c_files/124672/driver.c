#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36086;
int var_2 = 390359267;
unsigned char var_6 = (unsigned char)103;
int var_7 = -921932926;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -133201202;
int var_11 = 65525134;
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
