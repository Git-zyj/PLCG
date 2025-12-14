#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31692;
int var_4 = 210140099;
int var_9 = 364939608;
unsigned long long int var_10 = 9145689580895081876ULL;
unsigned int var_12 = 4229097414U;
unsigned short var_13 = (unsigned short)59868;
unsigned long long int var_15 = 4283826124524055048ULL;
short var_17 = (short)8479;
long long int var_18 = -129794669724677698LL;
int zero = 0;
long long int var_20 = 7542537608665376658LL;
long long int var_21 = -2227512259504691426LL;
signed char var_22 = (signed char)-43;
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
