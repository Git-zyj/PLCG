#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5198256342948954493LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)21179;
unsigned char var_12 = (unsigned char)9;
signed char var_15 = (signed char)9;
int zero = 0;
unsigned int var_16 = 1375890297U;
unsigned int var_17 = 4191019457U;
_Bool var_18 = (_Bool)1;
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
