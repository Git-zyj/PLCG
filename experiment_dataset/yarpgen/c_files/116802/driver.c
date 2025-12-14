#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21474;
short var_1 = (short)20403;
unsigned long long int var_2 = 5427571832702076633ULL;
unsigned long long int var_5 = 7431258231624269798ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)26661;
int var_11 = -1771196362;
unsigned short var_13 = (unsigned short)61441;
int zero = 0;
long long int var_14 = 5464838955359299793LL;
short var_15 = (short)18465;
int var_16 = 330923511;
_Bool var_17 = (_Bool)0;
short var_18 = (short)20905;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
