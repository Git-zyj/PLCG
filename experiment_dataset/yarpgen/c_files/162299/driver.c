#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18372;
int var_2 = 1717180067;
int var_3 = 889996676;
unsigned char var_5 = (unsigned char)83;
int var_7 = 1958914142;
unsigned long long int var_8 = 15261992226813250605ULL;
unsigned char var_9 = (unsigned char)201;
int zero = 0;
unsigned long long int var_11 = 13949348950968736887ULL;
unsigned int var_12 = 2593799115U;
long long int var_13 = 4181162958360680671LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
