#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65203;
long long int var_2 = -3211242622748924754LL;
signed char var_6 = (signed char)34;
signed char var_7 = (signed char)-35;
_Bool var_8 = (_Bool)1;
long long int var_11 = -3423098528973925156LL;
long long int var_15 = 3645990252303536226LL;
long long int var_16 = -7302615311109863396LL;
int zero = 0;
unsigned int var_18 = 1966765469U;
long long int var_19 = 655575527180058797LL;
long long int var_20 = 5205548981847181476LL;
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
