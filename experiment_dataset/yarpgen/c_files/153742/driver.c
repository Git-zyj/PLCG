#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1287089940;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)144;
short var_3 = (short)-6461;
signed char var_7 = (signed char)41;
int var_8 = -107343671;
int var_9 = 1529722844;
signed char var_10 = (signed char)-3;
long long int var_12 = -2758322298883554803LL;
unsigned int var_13 = 3840687457U;
int zero = 0;
short var_14 = (short)6566;
unsigned long long int var_15 = 15814076490274163518ULL;
short var_16 = (short)28809;
signed char var_17 = (signed char)-18;
unsigned long long int var_18 = 10450320974233414548ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
