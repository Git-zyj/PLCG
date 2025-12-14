#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28892;
unsigned short var_6 = (unsigned short)56150;
int zero = 0;
signed char var_19 = (signed char)-50;
unsigned int var_20 = 549750410U;
unsigned long long int var_21 = 11529634722869272906ULL;
unsigned short var_22 = (unsigned short)41671;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
