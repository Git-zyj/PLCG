#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
_Bool var_2 = (_Bool)1;
long long int var_4 = 5212582139274454550LL;
unsigned char var_9 = (unsigned char)113;
signed char var_10 = (signed char)27;
unsigned short var_11 = (unsigned short)22023;
unsigned long long int var_16 = 4583147764384375534ULL;
int zero = 0;
unsigned long long int var_19 = 16095054880664752910ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1507853403U;
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
