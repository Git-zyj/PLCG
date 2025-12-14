#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4156944237447242418ULL;
int var_1 = -638735775;
short var_2 = (short)14156;
int var_3 = -826662017;
unsigned short var_4 = (unsigned short)42753;
signed char var_6 = (signed char)-98;
int var_7 = 827100504;
unsigned long long int var_13 = 1622222736996567394ULL;
int var_17 = 614813215;
int zero = 0;
int var_19 = -219625055;
int var_20 = -1570641388;
unsigned long long int var_21 = 9757514078741318871ULL;
short var_22 = (short)23869;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
