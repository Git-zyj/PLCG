#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16324969567375523063ULL;
int var_2 = -773233182;
unsigned short var_5 = (unsigned short)54111;
long long int var_7 = -6374985734796530436LL;
signed char var_8 = (signed char)-95;
unsigned long long int var_9 = 10349554471485640536ULL;
signed char var_10 = (signed char)38;
long long int var_12 = -5333798667885844004LL;
unsigned short var_13 = (unsigned short)13142;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
short var_16 = (short)-20660;
int var_17 = -158263077;
unsigned short var_18 = (unsigned short)48693;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
