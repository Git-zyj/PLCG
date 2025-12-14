#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)244;
signed char var_10 = (signed char)31;
signed char var_14 = (signed char)5;
int zero = 0;
signed char var_19 = (signed char)-60;
unsigned int var_20 = 3743469188U;
unsigned short var_21 = (unsigned short)1565;
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
