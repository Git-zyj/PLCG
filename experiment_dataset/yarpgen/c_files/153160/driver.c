#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 808978779;
unsigned int var_7 = 3454606492U;
unsigned char var_10 = (unsigned char)39;
unsigned short var_11 = (unsigned short)3551;
unsigned int var_15 = 194847807U;
int var_18 = 573102372;
int zero = 0;
int var_20 = 1734018266;
unsigned int var_21 = 3584840354U;
int var_22 = -418841730;
unsigned char var_23 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
