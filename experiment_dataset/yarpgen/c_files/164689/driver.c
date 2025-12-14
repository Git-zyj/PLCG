#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -104968965;
unsigned short var_2 = (unsigned short)14770;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)7323;
unsigned long long int var_7 = 7417942566650791805ULL;
long long int var_8 = 3575986167296468677LL;
short var_9 = (short)-25790;
int var_11 = 643715111;
int zero = 0;
unsigned int var_12 = 3349505068U;
int var_13 = 1686977066;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
