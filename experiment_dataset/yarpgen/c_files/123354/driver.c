#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44940;
short var_2 = (short)24323;
unsigned long long int var_4 = 12013790400943176359ULL;
short var_5 = (short)23325;
short var_6 = (short)-11419;
short var_7 = (short)-10598;
unsigned int var_10 = 4180643471U;
unsigned long long int var_11 = 17573187997565323527ULL;
signed char var_15 = (signed char)-9;
unsigned long long int var_16 = 3974238845044858203ULL;
int zero = 0;
signed char var_20 = (signed char)-57;
unsigned short var_21 = (unsigned short)15766;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
