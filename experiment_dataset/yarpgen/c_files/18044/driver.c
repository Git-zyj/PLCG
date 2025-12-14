#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14556369288031267121ULL;
unsigned int var_3 = 2087131331U;
unsigned int var_5 = 2374741654U;
unsigned char var_6 = (unsigned char)235;
long long int var_7 = -59178745857977587LL;
unsigned char var_8 = (unsigned char)13;
unsigned short var_10 = (unsigned short)6554;
int zero = 0;
unsigned long long int var_11 = 6242639172163052244ULL;
unsigned int var_12 = 3265065691U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
