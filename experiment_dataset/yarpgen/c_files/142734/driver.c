#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
unsigned int var_3 = 105337787U;
signed char var_9 = (signed char)-66;
unsigned int var_11 = 2100431306U;
unsigned int var_12 = 3724195076U;
int var_14 = -1723144864;
unsigned long long int var_18 = 12651112743806003864ULL;
int zero = 0;
unsigned long long int var_20 = 3045912803500879700ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-52;
short var_23 = (short)15061;
signed char var_24 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
