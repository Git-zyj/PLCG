#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2764045506U;
long long int var_1 = 7616307011287162304LL;
long long int var_2 = -2342239596901983554LL;
int var_3 = -1182918434;
unsigned long long int var_4 = 3732576627957732192ULL;
unsigned int var_6 = 289442392U;
short var_7 = (short)9755;
unsigned long long int var_8 = 7403890456303963493ULL;
unsigned long long int var_10 = 11615813525450617225ULL;
int zero = 0;
short var_11 = (short)-32368;
signed char var_12 = (signed char)119;
unsigned short var_13 = (unsigned short)14220;
unsigned short var_14 = (unsigned short)4749;
int var_15 = -1173652846;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
