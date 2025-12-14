#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2923122304538194448LL;
unsigned char var_3 = (unsigned char)34;
unsigned int var_7 = 994907257U;
unsigned int var_8 = 4074958179U;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)16;
short var_12 = (short)10510;
unsigned char var_15 = (unsigned char)172;
int zero = 0;
unsigned short var_17 = (unsigned short)58447;
unsigned int var_18 = 3590011784U;
int var_19 = -30728465;
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
