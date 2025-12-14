#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31682;
long long int var_3 = -4049944752149498219LL;
unsigned long long int var_9 = 9008913413881375144ULL;
unsigned long long int var_10 = 16067943516045459966ULL;
long long int var_11 = 539388539021026963LL;
unsigned char var_13 = (unsigned char)155;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)65314;
unsigned short var_18 = (unsigned short)53804;
long long int var_19 = -7968770436902395916LL;
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
