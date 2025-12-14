#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3909974903319885534LL;
short var_2 = (short)-658;
unsigned short var_3 = (unsigned short)56259;
long long int var_5 = -7250186592043776555LL;
signed char var_8 = (signed char)-24;
int zero = 0;
unsigned short var_10 = (unsigned short)52892;
unsigned short var_11 = (unsigned short)9096;
signed char var_12 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
