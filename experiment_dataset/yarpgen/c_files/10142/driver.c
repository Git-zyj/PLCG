#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)798;
short var_4 = (short)12748;
long long int var_6 = 744679532346200391LL;
signed char var_9 = (signed char)-106;
int zero = 0;
long long int var_15 = -6370451789913786861LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1151285452345368655ULL;
signed char var_18 = (signed char)-8;
long long int var_19 = 6420885113560425476LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
