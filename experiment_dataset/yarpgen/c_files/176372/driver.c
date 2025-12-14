#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1767366325;
signed char var_6 = (signed char)4;
unsigned short var_7 = (unsigned short)1507;
unsigned int var_9 = 740275243U;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8018653961467119851LL;
signed char var_17 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
