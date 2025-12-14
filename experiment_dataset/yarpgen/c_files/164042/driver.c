#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12639;
signed char var_5 = (signed char)84;
int var_8 = -2040685633;
unsigned long long int var_9 = 17720667892447556048ULL;
unsigned long long int var_10 = 14115006295910103518ULL;
_Bool var_13 = (_Bool)1;
signed char var_16 = (signed char)-11;
int zero = 0;
unsigned int var_17 = 4183519499U;
unsigned char var_18 = (unsigned char)77;
unsigned long long int var_19 = 14562694644894523091ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
