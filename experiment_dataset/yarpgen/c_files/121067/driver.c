#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27164;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-28;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14470637421517191663ULL;
unsigned short var_12 = (unsigned short)61494;
unsigned long long int var_13 = 13289066979075586195ULL;
unsigned int var_16 = 846344641U;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)107;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-48;
unsigned int var_22 = 3118763296U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
