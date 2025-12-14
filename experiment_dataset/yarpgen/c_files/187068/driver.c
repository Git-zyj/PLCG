#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7754851759213619022ULL;
unsigned long long int var_4 = 7500076965737799417ULL;
unsigned int var_6 = 4118545510U;
unsigned long long int var_8 = 1427653944168410167ULL;
signed char var_12 = (signed char)10;
int zero = 0;
unsigned char var_14 = (unsigned char)127;
unsigned long long int var_15 = 12555156224453646098ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)58630;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
