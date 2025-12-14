#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3123675350U;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)5254;
unsigned char var_15 = (unsigned char)105;
unsigned long long int var_17 = 984484990538027707ULL;
int zero = 0;
int var_18 = -786849302;
unsigned int var_19 = 1860870442U;
void init() {
}

void checksum() {
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
