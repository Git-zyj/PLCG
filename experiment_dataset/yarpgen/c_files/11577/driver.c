#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
unsigned int var_3 = 3603285169U;
long long int var_4 = -6338598327919698721LL;
unsigned long long int var_5 = 35706444431917855ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 11577128130160011769ULL;
short var_11 = (short)-9104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
