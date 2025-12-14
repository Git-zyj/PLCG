#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -676448851160208751LL;
signed char var_1 = (signed char)40;
short var_2 = (short)7604;
unsigned long long int var_3 = 1670305755997865992ULL;
unsigned char var_4 = (unsigned char)138;
int var_6 = 613595407;
unsigned char var_7 = (unsigned char)115;
unsigned long long int var_8 = 9079458099895825294ULL;
int var_9 = -424512796;
signed char var_11 = (signed char)91;
long long int var_12 = -2633204395804248776LL;
int var_14 = -967278204;
int zero = 0;
signed char var_15 = (signed char)76;
signed char var_16 = (signed char)-32;
void init() {
}

void checksum() {
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
