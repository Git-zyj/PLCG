#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5198398817462689783ULL;
int var_8 = 259418586;
unsigned long long int var_12 = 3618345810127000079ULL;
unsigned int var_13 = 432157091U;
signed char var_17 = (signed char)-99;
int zero = 0;
short var_18 = (short)7799;
short var_19 = (short)30274;
long long int var_20 = -1979245377020596929LL;
unsigned char var_21 = (unsigned char)181;
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
