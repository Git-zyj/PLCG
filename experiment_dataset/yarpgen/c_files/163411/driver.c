#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6394513223701788170LL;
unsigned long long int var_3 = 3364079551907211491ULL;
signed char var_4 = (signed char)93;
long long int var_5 = 3747724602686510060LL;
long long int var_6 = -4070514322592104189LL;
signed char var_7 = (signed char)10;
int zero = 0;
signed char var_13 = (signed char)37;
unsigned int var_14 = 4046873762U;
long long int var_15 = -6862110323648295496LL;
signed char var_16 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
