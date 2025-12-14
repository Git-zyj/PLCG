#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1942503702;
int var_1 = -2053243266;
int var_2 = 1396439490;
unsigned short var_3 = (unsigned short)28100;
long long int var_4 = -8176990946634167687LL;
unsigned int var_6 = 364968855U;
int var_7 = -1177385992;
unsigned long long int var_8 = 9905138582119905938ULL;
unsigned short var_11 = (unsigned short)38755;
signed char var_12 = (signed char)-15;
signed char var_13 = (signed char)-17;
signed char var_14 = (signed char)-88;
unsigned short var_16 = (unsigned short)63937;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)90;
short var_21 = (short)-17227;
signed char var_22 = (signed char)-29;
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
