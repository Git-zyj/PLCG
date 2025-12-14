#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17946502892289547183ULL;
int var_1 = 1823113274;
int var_3 = -1882232800;
int var_6 = -1724043377;
int var_8 = 232051497;
int var_18 = 321444368;
signed char var_19 = (signed char)26;
int zero = 0;
unsigned long long int var_20 = 14291365992273878113ULL;
unsigned long long int var_21 = 823584101692720579ULL;
void init() {
}

void checksum() {
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
