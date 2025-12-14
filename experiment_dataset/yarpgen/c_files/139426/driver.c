#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1343027774;
short var_1 = (short)16992;
_Bool var_3 = (_Bool)1;
signed char var_12 = (signed char)64;
short var_13 = (short)22995;
int zero = 0;
long long int var_19 = 7006993707235721016LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1365474676U;
void init() {
}

void checksum() {
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
