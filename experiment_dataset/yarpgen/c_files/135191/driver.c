#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4294018232067698625LL;
long long int var_10 = -1730708490124306170LL;
unsigned int var_12 = 2663310297U;
long long int var_16 = 3593438542676778047LL;
int zero = 0;
unsigned int var_17 = 2286392122U;
unsigned char var_18 = (unsigned char)253;
unsigned int var_19 = 4134947039U;
unsigned char var_20 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
