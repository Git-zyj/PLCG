#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59815;
int var_2 = -293584951;
short var_5 = (short)27454;
long long int var_7 = -6365179530610291432LL;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-25838;
long long int var_12 = 261663740114704037LL;
int zero = 0;
signed char var_17 = (signed char)-45;
short var_18 = (short)24117;
unsigned long long int var_19 = 12426417762604534228ULL;
short var_20 = (short)28740;
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
