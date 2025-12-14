#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3858298122011682238ULL;
int var_8 = 105641838;
unsigned char var_9 = (unsigned char)254;
unsigned short var_10 = (unsigned short)49847;
signed char var_14 = (signed char)-115;
int zero = 0;
unsigned short var_16 = (unsigned short)36087;
long long int var_17 = -3299747480294855348LL;
short var_18 = (short)19243;
int var_19 = -1663775039;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
