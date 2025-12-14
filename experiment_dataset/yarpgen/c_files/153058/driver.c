#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3780036130U;
unsigned short var_5 = (unsigned short)47899;
unsigned long long int var_7 = 15091221691623818515ULL;
unsigned char var_10 = (unsigned char)207;
unsigned long long int var_11 = 4090002911628533289ULL;
int zero = 0;
unsigned int var_12 = 2148330941U;
unsigned long long int var_13 = 1245714089455509631ULL;
unsigned short var_14 = (unsigned short)63941;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
