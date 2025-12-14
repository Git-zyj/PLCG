#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1029152468;
long long int var_4 = 6834469826203198336LL;
short var_5 = (short)-24719;
unsigned long long int var_7 = 7008114120426342025ULL;
int var_11 = -72898041;
signed char var_13 = (signed char)49;
unsigned int var_17 = 3442811839U;
int zero = 0;
unsigned short var_20 = (unsigned short)5499;
int var_21 = -1415516468;
int var_22 = -1523161879;
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
