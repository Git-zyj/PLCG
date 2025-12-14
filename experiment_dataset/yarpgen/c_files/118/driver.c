#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1888116514515669203ULL;
unsigned char var_5 = (unsigned char)147;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-96;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
unsigned short var_14 = (unsigned short)27326;
unsigned long long int var_15 = 15397333405017322449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
