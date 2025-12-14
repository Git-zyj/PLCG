#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15915099715206661925ULL;
unsigned int var_2 = 3707224604U;
unsigned int var_5 = 1817938940U;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-82;
int zero = 0;
int var_12 = -2057637156;
unsigned long long int var_13 = 7535423685774495219ULL;
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
