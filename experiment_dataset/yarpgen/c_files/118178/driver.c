#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8659421975761262499LL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)58;
signed char var_6 = (signed char)8;
_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)19;
int zero = 0;
long long int var_15 = 119548119137221310LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)17959;
signed char var_18 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
