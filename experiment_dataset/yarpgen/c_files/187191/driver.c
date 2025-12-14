#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)100;
int var_6 = -1765280500;
unsigned short var_8 = (unsigned short)34449;
short var_9 = (short)30020;
short var_11 = (short)824;
unsigned int var_12 = 3847026745U;
unsigned char var_15 = (unsigned char)174;
unsigned long long int var_16 = 13721558492510868200ULL;
int zero = 0;
short var_18 = (short)18264;
long long int var_19 = 8943444433511745455LL;
int var_20 = 724928565;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
