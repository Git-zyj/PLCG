#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4309392052255238433LL;
long long int var_3 = -8668071399080928403LL;
signed char var_4 = (signed char)98;
unsigned short var_5 = (unsigned short)28447;
unsigned short var_8 = (unsigned short)3147;
unsigned char var_9 = (unsigned char)20;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-15;
unsigned int var_12 = 4012678016U;
int var_13 = 1783994424;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
