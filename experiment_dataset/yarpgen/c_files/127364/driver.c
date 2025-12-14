#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24991;
unsigned long long int var_5 = 2739359019819542466ULL;
signed char var_8 = (signed char)93;
unsigned long long int var_10 = 16357963494794779379ULL;
unsigned short var_13 = (unsigned short)5398;
int zero = 0;
signed char var_14 = (signed char)87;
unsigned int var_15 = 2169096643U;
short var_16 = (short)-19698;
signed char var_17 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
