#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4289418111U;
int var_3 = -2113501849;
unsigned long long int var_7 = 125391968120344381ULL;
unsigned char var_8 = (unsigned char)133;
unsigned int var_10 = 3238846216U;
unsigned long long int var_12 = 8540274018341864078ULL;
int zero = 0;
int var_16 = -1241664532;
signed char var_17 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
