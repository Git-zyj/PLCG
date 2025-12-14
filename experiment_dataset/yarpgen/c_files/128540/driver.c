#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4307478059008150713ULL;
long long int var_2 = -324748333084609313LL;
signed char var_3 = (signed char)76;
unsigned int var_5 = 2870924496U;
unsigned short var_6 = (unsigned short)63475;
short var_9 = (short)11340;
signed char var_10 = (signed char)56;
long long int var_11 = 7996921126746020968LL;
signed char var_12 = (signed char)-110;
short var_16 = (short)26530;
int zero = 0;
int var_17 = 821627652;
unsigned long long int var_18 = 10370691229557482726ULL;
short var_19 = (short)6150;
unsigned short var_20 = (unsigned short)19661;
unsigned long long int var_21 = 8796165075175823843ULL;
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
