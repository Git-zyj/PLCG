#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
signed char var_3 = (signed char)27;
unsigned short var_4 = (unsigned short)54296;
unsigned char var_5 = (unsigned char)18;
unsigned long long int var_8 = 16978919696054206975ULL;
unsigned char var_9 = (unsigned char)161;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-30679;
unsigned short var_17 = (unsigned short)32394;
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
