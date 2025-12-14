#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
signed char var_2 = (signed char)-86;
unsigned long long int var_6 = 14329428474832153826ULL;
unsigned int var_7 = 4291089369U;
signed char var_9 = (signed char)-54;
unsigned int var_12 = 2747099628U;
unsigned int var_16 = 2278614008U;
int zero = 0;
long long int var_17 = -8210395289857629133LL;
unsigned int var_18 = 2278174789U;
unsigned char var_19 = (unsigned char)97;
unsigned short var_20 = (unsigned short)52394;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
