#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6726169837960642469ULL;
short var_6 = (short)31133;
unsigned char var_12 = (unsigned char)28;
unsigned int var_14 = 795201239U;
unsigned long long int var_15 = 11101196450234482427ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)65132;
signed char var_20 = (signed char)90;
signed char var_21 = (signed char)-1;
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
