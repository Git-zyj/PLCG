#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)54;
short var_4 = (short)-25234;
int var_11 = -108882081;
signed char var_13 = (signed char)-56;
long long int var_14 = -6807055848166124122LL;
int var_15 = 823132483;
int var_16 = 218994303;
unsigned long long int var_18 = 9928143712030810431ULL;
int zero = 0;
int var_19 = -1205360787;
int var_20 = -1884684579;
short var_21 = (short)32632;
unsigned char var_22 = (unsigned char)153;
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
