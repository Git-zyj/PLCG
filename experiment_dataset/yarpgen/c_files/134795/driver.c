#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1099479065672570173LL;
signed char var_2 = (signed char)-86;
long long int var_3 = -8050760669938768878LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)16258;
long long int var_7 = -769450064338450783LL;
long long int var_9 = -4951433433259371532LL;
int zero = 0;
short var_13 = (short)-29281;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)32581;
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
