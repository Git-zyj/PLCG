#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12216;
unsigned short var_3 = (unsigned short)42424;
short var_4 = (short)17319;
long long int var_8 = -3243501864580359178LL;
long long int var_13 = -3996150126215187108LL;
int zero = 0;
unsigned int var_14 = 793039982U;
int var_15 = -3098927;
void init() {
}

void checksum() {
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
