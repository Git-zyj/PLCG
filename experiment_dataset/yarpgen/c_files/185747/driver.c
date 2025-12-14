#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5867297481884212676LL;
int var_1 = 313651379;
unsigned long long int var_6 = 10969048726589150156ULL;
unsigned int var_7 = 3124306782U;
long long int var_12 = 7313157528305696930LL;
int zero = 0;
unsigned int var_18 = 2843196034U;
unsigned short var_19 = (unsigned short)32759;
int var_20 = 1433616708;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
