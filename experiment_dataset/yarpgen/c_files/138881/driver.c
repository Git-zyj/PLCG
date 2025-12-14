#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32090;
unsigned long long int var_6 = 7120524658172095514ULL;
long long int var_15 = 3189859516029763453LL;
int zero = 0;
long long int var_19 = 2053064724981605928LL;
signed char var_20 = (signed char)-46;
unsigned short var_21 = (unsigned short)46167;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
