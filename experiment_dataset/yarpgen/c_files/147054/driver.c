#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
signed char var_2 = (signed char)-1;
unsigned short var_5 = (unsigned short)34344;
unsigned char var_8 = (unsigned char)129;
short var_11 = (short)9898;
long long int var_13 = 1497581512314729024LL;
int var_14 = 603230777;
int zero = 0;
unsigned long long int var_16 = 1865526865194883404ULL;
unsigned char var_17 = (unsigned char)73;
signed char var_18 = (signed char)-108;
_Bool var_19 = (_Bool)1;
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
