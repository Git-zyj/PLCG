#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5490965346790114353LL;
unsigned short var_1 = (unsigned short)56105;
signed char var_2 = (signed char)103;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)-71;
unsigned int var_8 = 1459345570U;
int zero = 0;
short var_10 = (short)22991;
unsigned int var_11 = 1178404611U;
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
