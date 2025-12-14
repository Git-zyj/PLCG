#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11980037488734425348ULL;
long long int var_6 = 3327499247449250323LL;
unsigned char var_8 = (unsigned char)3;
unsigned char var_12 = (unsigned char)205;
int zero = 0;
unsigned short var_19 = (unsigned short)59896;
signed char var_20 = (signed char)98;
void init() {
}

void checksum() {
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
