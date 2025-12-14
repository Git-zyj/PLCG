#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3475550415670477057ULL;
unsigned long long int var_7 = 8389223635193831161ULL;
int var_8 = 1539061812;
signed char var_9 = (signed char)-100;
long long int var_11 = 1547980934585681952LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)94;
unsigned short var_17 = (unsigned short)64043;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
