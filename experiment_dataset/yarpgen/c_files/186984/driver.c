#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14474;
int var_2 = -1245499254;
unsigned char var_4 = (unsigned char)135;
unsigned int var_5 = 3408969294U;
short var_17 = (short)-8010;
unsigned long long int var_18 = 1317626590172593612ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)4582;
unsigned long long int var_21 = 3683282643896269295ULL;
void init() {
}

void checksum() {
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
