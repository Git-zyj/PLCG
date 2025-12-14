#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1951;
unsigned char var_3 = (unsigned char)230;
long long int var_4 = 7481358082431081607LL;
unsigned int var_5 = 2698970740U;
int var_6 = -252229873;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 750473818U;
signed char var_12 = (signed char)27;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-11961;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-66;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
