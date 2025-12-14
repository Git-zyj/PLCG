#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 811133787U;
unsigned long long int var_5 = 13903805099033123305ULL;
short var_6 = (short)12420;
long long int var_8 = -372397261743034485LL;
int var_14 = -1584960311;
int zero = 0;
signed char var_20 = (signed char)-85;
unsigned short var_21 = (unsigned short)62303;
unsigned int var_22 = 4114774311U;
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
