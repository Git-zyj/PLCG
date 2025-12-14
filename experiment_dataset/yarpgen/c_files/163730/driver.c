#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -2445521145081701332LL;
unsigned short var_5 = (unsigned short)58820;
signed char var_6 = (signed char)-4;
unsigned long long int var_7 = 3252306090536232717ULL;
short var_9 = (short)22326;
signed char var_10 = (signed char)-95;
unsigned short var_11 = (unsigned short)25325;
long long int var_12 = -1912874187932410434LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3396953543U;
unsigned int var_16 = 4122963768U;
short var_17 = (short)31881;
unsigned char var_18 = (unsigned char)170;
int var_19 = -145176679;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
