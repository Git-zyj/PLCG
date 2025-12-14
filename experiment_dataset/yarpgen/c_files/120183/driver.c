#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4204965878U;
unsigned short var_8 = (unsigned short)35926;
long long int var_11 = -5567491137246504238LL;
int var_13 = 1389967226;
unsigned int var_17 = 4112198644U;
int zero = 0;
signed char var_18 = (signed char)23;
long long int var_19 = 486228295134883809LL;
signed char var_20 = (signed char)-9;
unsigned short var_21 = (unsigned short)18607;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
