#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2535356923952760778LL;
long long int var_1 = -5298827286525902413LL;
int var_2 = 1212971119;
signed char var_3 = (signed char)-103;
short var_4 = (short)-5500;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 2855115918U;
short var_8 = (short)-18736;
unsigned char var_9 = (unsigned char)154;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)32560;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)80;
signed char var_14 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
