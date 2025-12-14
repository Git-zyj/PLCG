#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1672941937;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-119;
int var_10 = -1214488820;
unsigned char var_12 = (unsigned char)169;
int zero = 0;
unsigned long long int var_14 = 9870087010374203948ULL;
unsigned char var_15 = (unsigned char)140;
unsigned int var_16 = 1233171648U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
