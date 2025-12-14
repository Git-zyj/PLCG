#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned long long int var_1 = 6332626623990578951ULL;
unsigned char var_7 = (unsigned char)4;
int var_8 = -1522717659;
unsigned short var_9 = (unsigned short)20493;
short var_10 = (short)-10703;
unsigned short var_11 = (unsigned short)15161;
signed char var_12 = (signed char)-86;
unsigned int var_13 = 1877972894U;
int var_14 = 1449115997;
int zero = 0;
int var_15 = 2117205568;
unsigned short var_16 = (unsigned short)38467;
unsigned int var_17 = 1419109736U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4113350376U;
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
