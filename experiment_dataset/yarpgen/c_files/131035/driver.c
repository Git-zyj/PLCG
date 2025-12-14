#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
long long int var_11 = 2713943869814948987LL;
int var_12 = -875323859;
int var_13 = -1058337346;
unsigned short var_15 = (unsigned short)11315;
int zero = 0;
short var_17 = (short)-20748;
unsigned char var_18 = (unsigned char)106;
long long int var_19 = 5429644814429639300LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
