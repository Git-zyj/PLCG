#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 224674862U;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)42361;
long long int var_9 = 5198067789093439807LL;
short var_10 = (short)13348;
int zero = 0;
unsigned int var_12 = 3008803670U;
unsigned short var_13 = (unsigned short)22135;
unsigned long long int var_14 = 13137659979016320505ULL;
int var_15 = 151522687;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
