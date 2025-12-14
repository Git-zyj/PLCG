#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11028938879604004082ULL;
long long int var_2 = -5973463472244869511LL;
unsigned short var_4 = (unsigned short)45503;
int var_5 = -1253170704;
short var_8 = (short)29709;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)-91;
short var_11 = (short)27756;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
