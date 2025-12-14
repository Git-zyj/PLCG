#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned long long int var_1 = 9500533320967139417ULL;
unsigned int var_3 = 1996116573U;
unsigned short var_4 = (unsigned short)53091;
unsigned long long int var_5 = 15977977314912253268ULL;
short var_6 = (short)-25322;
int var_7 = -292417265;
unsigned int var_8 = 299715817U;
unsigned short var_10 = (unsigned short)13641;
int zero = 0;
int var_11 = -1615443507;
short var_12 = (short)19302;
int var_13 = -1794570994;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
