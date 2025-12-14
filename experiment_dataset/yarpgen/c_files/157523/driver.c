#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30479;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)28;
int var_17 = 2098955001;
int zero = 0;
unsigned long long int var_18 = 15955657804242629426ULL;
unsigned int var_19 = 296397535U;
unsigned long long int var_20 = 11598470051073549622ULL;
signed char var_21 = (signed char)-102;
void init() {
}

void checksum() {
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
