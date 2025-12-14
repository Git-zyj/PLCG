#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-21128;
unsigned char var_5 = (unsigned char)230;
unsigned short var_6 = (unsigned short)38469;
signed char var_7 = (signed char)93;
short var_10 = (short)7180;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 735388412U;
short var_14 = (short)27242;
unsigned long long int var_16 = 5309564092729198286ULL;
int zero = 0;
signed char var_17 = (signed char)81;
unsigned char var_18 = (unsigned char)197;
unsigned int var_19 = 1118928591U;
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
