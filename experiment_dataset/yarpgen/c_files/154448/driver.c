#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3331;
int var_2 = -901603260;
_Bool var_4 = (_Bool)0;
short var_6 = (short)9134;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 360922306U;
int zero = 0;
unsigned long long int var_10 = 14746824833241560987ULL;
short var_11 = (short)20445;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
