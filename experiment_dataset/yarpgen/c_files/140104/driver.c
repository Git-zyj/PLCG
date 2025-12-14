#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
int var_3 = 143020532;
signed char var_4 = (signed char)-16;
unsigned short var_5 = (unsigned short)45857;
unsigned char var_6 = (unsigned char)172;
int var_7 = 334301115;
unsigned char var_8 = (unsigned char)40;
unsigned int var_10 = 3888229000U;
unsigned long long int var_12 = 7911000238667960036ULL;
long long int var_13 = -5357801110769218169LL;
long long int var_15 = -3977486065895593122LL;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
short var_19 = (short)-31656;
signed char var_20 = (signed char)121;
unsigned char var_21 = (unsigned char)252;
short var_22 = (short)-5433;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
