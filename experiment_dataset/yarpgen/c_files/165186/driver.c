#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19077;
unsigned short var_3 = (unsigned short)45740;
unsigned short var_5 = (unsigned short)16025;
unsigned long long int var_6 = 13411654944520744070ULL;
unsigned char var_7 = (unsigned char)238;
long long int var_8 = 2334172169485900569LL;
signed char var_9 = (signed char)126;
int zero = 0;
unsigned char var_11 = (unsigned char)89;
unsigned int var_12 = 1141745633U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4231922640U;
signed char var_15 = (signed char)51;
unsigned short var_16 = (unsigned short)45400;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
