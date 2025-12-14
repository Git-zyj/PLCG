#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3168099365U;
long long int var_6 = 3723668156597821653LL;
short var_9 = (short)5325;
int zero = 0;
unsigned char var_12 = (unsigned char)105;
unsigned int var_13 = 617480925U;
signed char var_14 = (signed char)37;
void init() {
}

void checksum() {
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
