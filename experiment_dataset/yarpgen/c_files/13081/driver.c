#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)26951;
signed char var_5 = (signed char)-104;
unsigned char var_8 = (unsigned char)31;
int var_9 = -1247276485;
_Bool var_15 = (_Bool)0;
long long int var_18 = -4683756006605867363LL;
int zero = 0;
int var_20 = -1175219145;
unsigned int var_21 = 3646291690U;
short var_22 = (short)11825;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
