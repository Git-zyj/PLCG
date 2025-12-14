#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
unsigned char var_2 = (unsigned char)17;
unsigned long long int var_3 = 6911212249996278307ULL;
unsigned long long int var_4 = 13357694505367772733ULL;
unsigned char var_9 = (unsigned char)58;
int var_12 = 257151339;
short var_13 = (short)7265;
unsigned short var_17 = (unsigned short)24414;
unsigned char var_19 = (unsigned char)230;
int zero = 0;
unsigned short var_20 = (unsigned short)4753;
unsigned long long int var_21 = 8148531809217398849ULL;
unsigned int var_22 = 2536965912U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
