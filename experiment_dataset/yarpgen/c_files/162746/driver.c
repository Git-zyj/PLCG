#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 328465269U;
unsigned int var_9 = 573555465U;
long long int var_12 = 7818748787780848863LL;
short var_14 = (short)-24903;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15475777146642755009ULL;
unsigned int var_21 = 1256874466U;
unsigned short var_22 = (unsigned short)9835;
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
