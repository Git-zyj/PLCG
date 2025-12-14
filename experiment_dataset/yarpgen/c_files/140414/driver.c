#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6757893295366196187LL;
int var_6 = 298261139;
_Bool var_7 = (_Bool)1;
short var_8 = (short)24615;
long long int var_9 = 5059372655264847498LL;
long long int var_10 = 3557818901471270679LL;
unsigned int var_11 = 1604061310U;
int zero = 0;
unsigned char var_13 = (unsigned char)80;
signed char var_14 = (signed char)-118;
signed char var_15 = (signed char)111;
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
