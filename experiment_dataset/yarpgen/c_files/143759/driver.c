#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9757;
signed char var_4 = (signed char)45;
_Bool var_6 = (_Bool)0;
signed char var_11 = (signed char)-82;
signed char var_12 = (signed char)58;
unsigned char var_17 = (unsigned char)252;
int var_19 = 1582435870;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-40;
unsigned long long int var_22 = 2363847180276447872ULL;
unsigned int var_23 = 2024399448U;
long long int var_24 = -8619117863659240308LL;
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
