#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -2102179483831637579LL;
unsigned int var_7 = 477105252U;
unsigned int var_9 = 2822804139U;
long long int var_13 = -3287397853870518584LL;
int zero = 0;
unsigned int var_18 = 4040906660U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2597178355U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
