#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 8142439778968260132LL;
int var_14 = -469903006;
long long int var_16 = 8484051832784713738LL;
unsigned char var_19 = (unsigned char)221;
int zero = 0;
int var_20 = 1536641986;
int var_21 = 86226042;
unsigned int var_22 = 3525489159U;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
