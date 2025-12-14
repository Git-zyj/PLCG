#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 77483877U;
unsigned long long int var_13 = 14066964627902859594ULL;
short var_14 = (short)-13138;
unsigned char var_16 = (unsigned char)196;
long long int var_19 = -2246809428721775220LL;
int zero = 0;
long long int var_20 = 1350896790512516620LL;
unsigned short var_21 = (unsigned short)41250;
unsigned long long int var_22 = 14329924961395809681ULL;
void init() {
}

void checksum() {
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
