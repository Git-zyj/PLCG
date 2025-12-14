#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41545;
unsigned int var_2 = 4103159571U;
unsigned int var_5 = 4198852228U;
unsigned short var_6 = (unsigned short)31194;
int var_7 = -61626947;
unsigned short var_8 = (unsigned short)53315;
unsigned long long int var_9 = 16047163666210882358ULL;
int var_11 = -2080291727;
int zero = 0;
long long int var_12 = 6806446914136378404LL;
unsigned char var_13 = (unsigned char)137;
unsigned short var_14 = (unsigned short)46354;
unsigned char var_15 = (unsigned char)163;
signed char var_16 = (signed char)-8;
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
