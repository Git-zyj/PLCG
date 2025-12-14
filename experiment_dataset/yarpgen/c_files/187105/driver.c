#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27981;
unsigned long long int var_1 = 2074328479222200985ULL;
int var_2 = 78290093;
unsigned int var_4 = 1263787288U;
unsigned int var_6 = 1029489400U;
unsigned char var_8 = (unsigned char)159;
int var_9 = -769945745;
signed char var_10 = (signed char)-96;
short var_11 = (short)-16379;
long long int var_12 = 6283364478123547814LL;
signed char var_13 = (signed char)-83;
unsigned int var_14 = 2688274521U;
int zero = 0;
int var_17 = -971676467;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)241;
long long int var_20 = -6391837021275752148LL;
int var_21 = -1378138764;
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
