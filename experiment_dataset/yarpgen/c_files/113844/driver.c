#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33492;
unsigned short var_5 = (unsigned short)40935;
unsigned int var_6 = 697257612U;
short var_7 = (short)21395;
signed char var_9 = (signed char)97;
unsigned int var_10 = 3632620996U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 18330731280633505473ULL;
unsigned int var_14 = 3338044644U;
signed char var_15 = (signed char)-28;
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
