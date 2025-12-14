#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18367;
short var_5 = (short)-29816;
unsigned long long int var_6 = 3914569610989221943ULL;
unsigned char var_9 = (unsigned char)215;
short var_10 = (short)-28405;
_Bool var_11 = (_Bool)1;
long long int var_18 = -8190422132135485525LL;
int zero = 0;
unsigned char var_20 = (unsigned char)220;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 11507877340138862643ULL;
short var_23 = (short)29471;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
