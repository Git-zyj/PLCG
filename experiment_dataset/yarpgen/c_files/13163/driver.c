#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1614423691;
int var_4 = -1142997153;
unsigned int var_6 = 2820956590U;
unsigned char var_8 = (unsigned char)82;
unsigned short var_9 = (unsigned short)28436;
int zero = 0;
unsigned long long int var_13 = 8003795715973810470ULL;
unsigned char var_14 = (unsigned char)14;
_Bool var_15 = (_Bool)1;
int var_16 = -1701021632;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
