#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2386359443U;
unsigned int var_6 = 3508377270U;
unsigned char var_7 = (unsigned char)108;
unsigned short var_9 = (unsigned short)28568;
int zero = 0;
long long int var_10 = -8518556033960739529LL;
_Bool var_11 = (_Bool)0;
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
