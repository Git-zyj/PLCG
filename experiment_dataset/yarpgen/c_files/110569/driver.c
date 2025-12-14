#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1250162613;
int var_7 = -850330149;
short var_11 = (short)12988;
unsigned short var_13 = (unsigned short)50655;
unsigned long long int var_15 = 9299493744720148934ULL;
int zero = 0;
signed char var_16 = (signed char)81;
short var_17 = (short)14275;
short var_18 = (short)29708;
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
