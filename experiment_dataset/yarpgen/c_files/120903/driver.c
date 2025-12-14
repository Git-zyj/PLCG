#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18705;
unsigned int var_6 = 2325276137U;
unsigned int var_7 = 698041028U;
signed char var_8 = (signed char)-74;
unsigned char var_9 = (unsigned char)113;
long long int var_10 = 7006487263713384383LL;
unsigned long long int var_11 = 4552153374795075705ULL;
unsigned int var_12 = 573310144U;
int zero = 0;
unsigned int var_13 = 1062876613U;
signed char var_14 = (signed char)83;
unsigned short var_15 = (unsigned short)19373;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
