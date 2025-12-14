#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)42393;
short var_9 = (short)22218;
int zero = 0;
long long int var_11 = 7014646429946625979LL;
unsigned long long int var_12 = 3315866679196850780ULL;
unsigned short var_13 = (unsigned short)58656;
long long int var_14 = 6254050989581701509LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
