#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1941055206U;
long long int var_2 = -8737952271492243090LL;
unsigned short var_3 = (unsigned short)19780;
unsigned short var_6 = (unsigned short)57622;
short var_8 = (short)5451;
unsigned long long int var_11 = 5816179793268893094ULL;
unsigned long long int var_12 = 13095263097945744648ULL;
signed char var_15 = (signed char)76;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)31512;
signed char var_18 = (signed char)-58;
unsigned int var_19 = 3315275997U;
void init() {
}

void checksum() {
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
