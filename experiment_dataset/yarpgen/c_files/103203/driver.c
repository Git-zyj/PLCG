#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
long long int var_1 = -3045512902701281984LL;
short var_2 = (short)530;
unsigned char var_3 = (unsigned char)1;
unsigned int var_4 = 530039342U;
int var_5 = 853037487;
int var_6 = -1011597931;
_Bool var_7 = (_Bool)0;
short var_8 = (short)20355;
short var_9 = (short)-19700;
int zero = 0;
long long int var_10 = -5811976068775165513LL;
unsigned long long int var_11 = 3705000221254561178ULL;
int var_12 = -1800565113;
int var_13 = 547098751;
short var_14 = (short)-15056;
short var_15 = (short)29802;
unsigned int var_16 = 2151925432U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
