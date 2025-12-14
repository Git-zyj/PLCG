#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 389308383;
unsigned short var_2 = (unsigned short)43854;
int var_3 = 720023207;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)4118;
signed char var_9 = (signed char)9;
unsigned int var_10 = 507196260U;
unsigned short var_13 = (unsigned short)50470;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1121695034U;
int var_19 = 1844130017;
unsigned int var_20 = 85798119U;
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
