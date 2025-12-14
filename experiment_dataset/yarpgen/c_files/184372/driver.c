#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14544334623687943915ULL;
signed char var_3 = (signed char)44;
int var_5 = -1226367263;
unsigned short var_9 = (unsigned short)64089;
int zero = 0;
long long int var_14 = 5235560653315621535LL;
unsigned long long int var_15 = 11754392379670038352ULL;
unsigned long long int var_16 = 18422588093860954942ULL;
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
