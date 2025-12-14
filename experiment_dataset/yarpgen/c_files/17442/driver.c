#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1358871456422936497ULL;
signed char var_4 = (signed char)105;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
signed char var_20 = (signed char)26;
long long int var_21 = 2414011300853371774LL;
long long int var_22 = 5878441691174029624LL;
long long int var_23 = -3785573878728783686LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
