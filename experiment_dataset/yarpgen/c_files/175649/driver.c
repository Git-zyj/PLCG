#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62511;
unsigned long long int var_6 = 9884936351124747668ULL;
long long int var_7 = 7896987094765416618LL;
signed char var_9 = (signed char)-127;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -444235348;
void init() {
}

void checksum() {
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
