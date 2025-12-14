#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1803865077U;
int var_6 = -1112115508;
int var_8 = 1549601712;
unsigned int var_14 = 1630263465U;
int zero = 0;
unsigned long long int var_19 = 3868889816482875630ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1998356468621307056ULL;
unsigned char var_22 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
