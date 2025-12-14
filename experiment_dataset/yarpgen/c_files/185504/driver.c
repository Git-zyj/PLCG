#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16397874539348399019ULL;
long long int var_2 = -8897456397986128021LL;
unsigned long long int var_3 = 2523858762476792119ULL;
short var_5 = (short)363;
signed char var_6 = (signed char)-79;
signed char var_9 = (signed char)22;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-77;
long long int var_13 = 2068540745075022818LL;
signed char var_14 = (signed char)36;
int zero = 0;
short var_16 = (short)-15909;
long long int var_17 = -2387469218892688319LL;
unsigned long long int var_18 = 11524940794245044236ULL;
void init() {
}

void checksum() {
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
