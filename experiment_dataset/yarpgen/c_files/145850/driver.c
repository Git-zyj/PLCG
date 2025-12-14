#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)25;
long long int var_8 = 2181523587626849678LL;
short var_9 = (short)2481;
unsigned long long int var_10 = 9258180751282420551ULL;
int zero = 0;
signed char var_12 = (signed char)-104;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)58;
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
