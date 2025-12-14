#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8217;
signed char var_3 = (signed char)-60;
signed char var_11 = (signed char)23;
signed char var_14 = (signed char)-31;
signed char var_15 = (signed char)-3;
unsigned short var_16 = (unsigned short)43662;
int zero = 0;
short var_18 = (short)-20548;
unsigned long long int var_19 = 5980015307215178789ULL;
unsigned short var_20 = (unsigned short)49962;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
