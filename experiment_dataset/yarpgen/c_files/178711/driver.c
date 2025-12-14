#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
short var_2 = (short)-9648;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)7;
long long int var_7 = 571390578232773716LL;
unsigned int var_8 = 3110216481U;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-11429;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -5721189373998373044LL;
unsigned int var_18 = 496194164U;
short var_19 = (short)-11483;
unsigned long long int var_20 = 17776099733001247037ULL;
unsigned long long int var_21 = 11966871930313146766ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
