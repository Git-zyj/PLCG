#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17284830936448079855ULL;
int var_2 = 1374274494;
unsigned int var_4 = 1909756981U;
int var_6 = 116761585;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_11 = 2174005003611762553LL;
unsigned char var_12 = (unsigned char)127;
short var_13 = (short)-4281;
int var_14 = 664583144;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
