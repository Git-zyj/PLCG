#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
unsigned long long int var_3 = 5178996924184969148ULL;
int var_4 = 2010204763;
long long int var_5 = 5110150907776288466LL;
unsigned long long int var_6 = 14862557865227787230ULL;
int var_8 = 225979462;
long long int var_10 = -6761910552219620033LL;
long long int var_13 = 5308374319807909213LL;
int zero = 0;
long long int var_14 = -4893979755941992253LL;
unsigned char var_15 = (unsigned char)33;
unsigned char var_16 = (unsigned char)136;
void init() {
}

void checksum() {
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
