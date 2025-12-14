#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1173822471U;
unsigned char var_6 = (unsigned char)36;
long long int var_7 = -7987667094007231464LL;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-26019;
int zero = 0;
int var_15 = -1388466125;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)39;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
