#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)59892;
_Bool var_6 = (_Bool)1;
int var_9 = 2125723279;
unsigned short var_10 = (unsigned short)23238;
signed char var_11 = (signed char)57;
int zero = 0;
unsigned int var_12 = 2414317237U;
unsigned short var_13 = (unsigned short)45980;
unsigned char var_14 = (unsigned char)153;
unsigned short var_15 = (unsigned short)26855;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
