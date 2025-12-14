#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
int var_2 = -1312437274;
unsigned int var_3 = 3955306949U;
int var_4 = 1245371970;
int var_8 = 604862210;
long long int var_9 = 7750224167206162252LL;
int zero = 0;
unsigned long long int var_12 = 17182635369939165262ULL;
long long int var_13 = 7834564769127307940LL;
unsigned char var_14 = (unsigned char)116;
unsigned int var_15 = 596053750U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
