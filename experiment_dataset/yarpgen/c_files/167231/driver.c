#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15152312225373399567ULL;
unsigned short var_1 = (unsigned short)42515;
unsigned short var_2 = (unsigned short)12487;
unsigned long long int var_3 = 1302041290834170661ULL;
int var_6 = -1492719018;
signed char var_7 = (signed char)-12;
int var_9 = -789601093;
int zero = 0;
int var_10 = 1086645451;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
