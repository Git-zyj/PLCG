#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)117;
int var_8 = 540987574;
signed char var_12 = (signed char)-89;
int var_15 = 493556812;
unsigned short var_17 = (unsigned short)62020;
int zero = 0;
signed char var_19 = (signed char)-120;
unsigned short var_20 = (unsigned short)51849;
_Bool var_21 = (_Bool)1;
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
