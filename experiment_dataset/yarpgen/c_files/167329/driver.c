#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4206415425U;
unsigned int var_1 = 1622256422U;
short var_3 = (short)-24948;
unsigned int var_5 = 974957912U;
short var_9 = (short)19762;
unsigned int var_10 = 2791749426U;
unsigned int var_11 = 4025224513U;
short var_16 = (short)-32204;
short var_19 = (short)13790;
int zero = 0;
unsigned long long int var_20 = 2265359175939638716ULL;
unsigned int var_21 = 624559576U;
short var_22 = (short)-1219;
unsigned long long int var_23 = 3913733277099810068ULL;
void init() {
}

void checksum() {
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
