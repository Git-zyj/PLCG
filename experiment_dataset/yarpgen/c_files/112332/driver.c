#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52707;
short var_2 = (short)-10372;
long long int var_4 = 7221130258885149961LL;
unsigned long long int var_12 = 14919162312631819266ULL;
int zero = 0;
long long int var_16 = -375061053223781347LL;
unsigned short var_17 = (unsigned short)21215;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1979975059U;
void init() {
}

void checksum() {
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
