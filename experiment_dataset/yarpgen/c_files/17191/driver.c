#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1862142977;
int var_9 = 1800153206;
signed char var_12 = (signed char)38;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)50987;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1005507063;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
