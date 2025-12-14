#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)157;
signed char var_7 = (signed char)60;
unsigned short var_9 = (unsigned short)33377;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 11744098596844037578ULL;
long long int var_19 = -6956490504188310706LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
