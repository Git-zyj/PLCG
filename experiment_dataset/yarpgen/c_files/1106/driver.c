#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 212319517U;
unsigned short var_3 = (unsigned short)47382;
unsigned short var_4 = (unsigned short)34731;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-86;
short var_8 = (short)-29102;
unsigned long long int var_9 = 7167590076407529365ULL;
unsigned long long int var_10 = 6327701284271701245ULL;
int zero = 0;
unsigned int var_13 = 312887793U;
unsigned long long int var_14 = 817266058515491335ULL;
long long int var_15 = -8529418949098913112LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
