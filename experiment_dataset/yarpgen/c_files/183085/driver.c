#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3262695956U;
unsigned long long int var_8 = 9517604093743569709ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)15;
unsigned short var_17 = (unsigned short)4550;
int zero = 0;
unsigned short var_19 = (unsigned short)18087;
signed char var_20 = (signed char)-104;
unsigned short var_21 = (unsigned short)49265;
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
