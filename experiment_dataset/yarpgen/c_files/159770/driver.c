#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-32;
unsigned short var_3 = (unsigned short)18682;
unsigned int var_4 = 3985097077U;
signed char var_6 = (signed char)-44;
unsigned long long int var_8 = 12856866506698862207ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-33;
unsigned short var_14 = (unsigned short)19306;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)39507;
unsigned short var_18 = (unsigned short)47562;
unsigned char var_19 = (unsigned char)145;
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
