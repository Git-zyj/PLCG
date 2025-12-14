#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3463615409U;
signed char var_1 = (signed char)-65;
unsigned long long int var_2 = 408127911566209143ULL;
unsigned short var_3 = (unsigned short)26384;
long long int var_5 = 8041079332127205216LL;
signed char var_6 = (signed char)40;
long long int var_9 = -885422952715735001LL;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
short var_12 = (short)-23077;
unsigned int var_13 = 121714395U;
unsigned int var_14 = 856275648U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
