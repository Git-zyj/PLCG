#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15634723321848169871ULL;
unsigned long long int var_2 = 15087583439359745205ULL;
long long int var_4 = -4606793154726820379LL;
unsigned int var_5 = 457971614U;
short var_9 = (short)22744;
unsigned char var_12 = (unsigned char)186;
int zero = 0;
signed char var_15 = (signed char)-65;
long long int var_16 = -1728180412799548487LL;
unsigned char var_17 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
