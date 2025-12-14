#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)56421;
long long int var_8 = -2899470799333901387LL;
short var_9 = (short)-816;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)507;
unsigned int var_14 = 4280644756U;
unsigned short var_17 = (unsigned short)31893;
unsigned char var_18 = (unsigned char)65;
int zero = 0;
unsigned long long int var_19 = 952196754898931783ULL;
int var_20 = 60444903;
int var_21 = -2011658639;
_Bool var_22 = (_Bool)0;
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
