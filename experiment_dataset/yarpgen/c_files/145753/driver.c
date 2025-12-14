#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7267146869141307113LL;
long long int var_2 = 6537985475877033816LL;
int var_4 = 1200512367;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-19;
signed char var_10 = (signed char)-104;
short var_12 = (short)-14345;
int zero = 0;
short var_13 = (short)-8870;
int var_14 = 1094556025;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
