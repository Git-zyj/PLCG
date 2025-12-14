#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -520978993;
_Bool var_8 = (_Bool)0;
int var_11 = -1245767486;
unsigned int var_13 = 1036751939U;
unsigned int var_14 = 3407525098U;
int zero = 0;
unsigned int var_18 = 697441975U;
unsigned short var_19 = (unsigned short)49455;
unsigned int var_20 = 3823047221U;
long long int var_21 = 8366738840825950628LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
