#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7976234168413349539ULL;
unsigned short var_9 = (unsigned short)28651;
signed char var_10 = (signed char)-13;
int zero = 0;
unsigned long long int var_11 = 9261553463283494714ULL;
unsigned char var_12 = (unsigned char)44;
unsigned int var_13 = 3336480483U;
short var_14 = (short)11676;
int var_15 = -772186118;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
