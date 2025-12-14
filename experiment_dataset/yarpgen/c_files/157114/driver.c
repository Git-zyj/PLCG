#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3569814553U;
int var_2 = 1047901724;
signed char var_3 = (signed char)-81;
short var_4 = (short)6998;
unsigned short var_6 = (unsigned short)53051;
int var_8 = 2096814302;
short var_9 = (short)-3066;
unsigned long long int var_11 = 4307514049689381485ULL;
int zero = 0;
int var_12 = 25287137;
unsigned char var_13 = (unsigned char)11;
unsigned char var_14 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
