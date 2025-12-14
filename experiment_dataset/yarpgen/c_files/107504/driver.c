#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16509689256282495694ULL;
unsigned short var_4 = (unsigned short)54127;
unsigned short var_7 = (unsigned short)10291;
unsigned long long int var_16 = 13725593313202010360ULL;
int zero = 0;
signed char var_18 = (signed char)31;
unsigned char var_19 = (unsigned char)1;
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
