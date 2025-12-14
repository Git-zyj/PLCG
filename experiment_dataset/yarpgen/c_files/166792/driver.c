#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9274850250138421861ULL;
unsigned int var_6 = 23294326U;
unsigned char var_11 = (unsigned char)174;
long long int var_17 = -2171350257683707855LL;
int zero = 0;
unsigned long long int var_18 = 15928894177055819773ULL;
short var_19 = (short)-3513;
short var_20 = (short)27502;
unsigned char var_21 = (unsigned char)246;
unsigned char var_22 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
