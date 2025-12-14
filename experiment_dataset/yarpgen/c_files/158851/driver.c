#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)50;
short var_5 = (short)12800;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-67;
unsigned char var_17 = (unsigned char)109;
unsigned char var_18 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
