#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23907;
short var_2 = (short)-20001;
unsigned int var_3 = 2889279260U;
long long int var_6 = -8797102648983650393LL;
long long int var_7 = -1190211195470534877LL;
unsigned short var_8 = (unsigned short)58974;
short var_15 = (short)-9293;
int zero = 0;
signed char var_17 = (signed char)27;
long long int var_18 = 3441416109307812063LL;
unsigned short var_19 = (unsigned short)64778;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2701416946U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
