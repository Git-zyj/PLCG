#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1543;
unsigned short var_2 = (unsigned short)37613;
_Bool var_3 = (_Bool)0;
int var_15 = -994555615;
short var_18 = (short)12193;
int zero = 0;
int var_19 = 759775705;
long long int var_20 = -3288484288767130674LL;
short var_21 = (short)24458;
unsigned short var_22 = (unsigned short)40807;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
