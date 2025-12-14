#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6793498057975369170LL;
int var_9 = -1718367177;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2803096294U;
unsigned char var_13 = (unsigned char)60;
unsigned char var_16 = (unsigned char)231;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -2704856073017337953LL;
long long int var_19 = 7236754405901979911LL;
unsigned char var_20 = (unsigned char)187;
unsigned long long int var_21 = 16379165952291421030ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
