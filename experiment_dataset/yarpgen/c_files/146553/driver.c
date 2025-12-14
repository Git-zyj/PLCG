#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14595;
_Bool var_3 = (_Bool)1;
long long int var_4 = 8232175002133297404LL;
unsigned long long int var_6 = 13489348063713738944ULL;
unsigned int var_9 = 2493156067U;
int var_11 = -407503104;
int zero = 0;
long long int var_15 = 3710274385049338156LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
