#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -7904891737265142803LL;
unsigned char var_4 = (unsigned char)37;
int var_12 = -967204771;
long long int var_15 = 63949858256577799LL;
unsigned short var_16 = (unsigned short)16415;
int zero = 0;
short var_17 = (short)-15626;
unsigned short var_18 = (unsigned short)37582;
short var_19 = (short)32000;
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
