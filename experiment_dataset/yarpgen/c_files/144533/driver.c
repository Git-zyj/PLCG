#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7278711935009968166LL;
long long int var_3 = 4493524758906640238LL;
unsigned short var_4 = (unsigned short)64524;
int var_5 = -487722459;
long long int var_6 = 3669487849435432389LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)15879;
int var_13 = 1474148346;
long long int var_14 = 5297814727589207919LL;
unsigned long long int var_15 = 12589165608466476985ULL;
unsigned short var_16 = (unsigned short)47811;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
