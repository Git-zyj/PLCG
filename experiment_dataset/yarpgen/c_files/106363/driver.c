#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
long long int var_4 = 3237161163092672428LL;
unsigned long long int var_6 = 13345445235335305318ULL;
int var_8 = 227837208;
int var_9 = 409734391;
int zero = 0;
int var_11 = 2040485525;
unsigned short var_12 = (unsigned short)50770;
unsigned short var_13 = (unsigned short)19418;
long long int var_14 = 7136269486745026740LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
