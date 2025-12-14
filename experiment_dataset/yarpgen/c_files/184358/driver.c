#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64040;
unsigned long long int var_4 = 11610339730877576430ULL;
int var_5 = -1186025104;
unsigned short var_6 = (unsigned short)55542;
unsigned int var_11 = 2205127684U;
int zero = 0;
unsigned long long int var_12 = 9573469835231876413ULL;
int var_13 = 1545039865;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
