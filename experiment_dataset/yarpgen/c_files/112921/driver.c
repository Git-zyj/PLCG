#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-63;
int var_2 = 566659197;
unsigned short var_9 = (unsigned short)54538;
unsigned int var_10 = 743943192U;
unsigned char var_12 = (unsigned char)95;
unsigned int var_13 = 2443626337U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-69;
unsigned char var_16 = (unsigned char)35;
signed char var_17 = (signed char)-93;
int var_18 = -1006874037;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
