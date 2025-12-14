#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3177;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)150;
unsigned long long int var_7 = 6465442063419077444ULL;
unsigned short var_8 = (unsigned short)49042;
int var_12 = -1108792069;
int zero = 0;
short var_15 = (short)16824;
unsigned int var_16 = 3005834619U;
int var_17 = 833177968;
short var_18 = (short)-24340;
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
