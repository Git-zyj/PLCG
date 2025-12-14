#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1439556670U;
unsigned int var_2 = 2473674323U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)26684;
_Bool var_6 = (_Bool)0;
short var_7 = (short)12561;
long long int var_8 = 2809389386554719889LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 14062061210413331746ULL;
unsigned short var_11 = (unsigned short)60159;
int zero = 0;
unsigned int var_13 = 3951032815U;
unsigned int var_14 = 3232222436U;
short var_15 = (short)-7506;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
