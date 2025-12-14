#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
signed char var_3 = (signed char)120;
unsigned short var_11 = (unsigned short)12146;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -6038804136377711233LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)37253;
unsigned short var_20 = (unsigned short)34258;
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
