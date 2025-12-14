#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)226;
unsigned char var_4 = (unsigned char)101;
signed char var_5 = (signed char)-73;
unsigned long long int var_6 = 16427932691268848081ULL;
int zero = 0;
unsigned long long int var_11 = 11592412735692012460ULL;
signed char var_12 = (signed char)82;
int var_13 = 1261472343;
short var_14 = (short)20363;
unsigned int var_15 = 4178473594U;
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
