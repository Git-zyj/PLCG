#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
int var_4 = -1937279924;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)106;
unsigned short var_9 = (unsigned short)3708;
unsigned long long int var_10 = 11940534924334081005ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 952996180U;
signed char var_16 = (signed char)-39;
void init() {
}

void checksum() {
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
