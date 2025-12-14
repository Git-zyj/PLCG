#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16338;
unsigned int var_8 = 3040645451U;
long long int var_11 = -7068448076347185228LL;
int zero = 0;
signed char var_14 = (signed char)26;
unsigned long long int var_15 = 14840271427911868005ULL;
long long int var_16 = 4984978996577379651LL;
void init() {
}

void checksum() {
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
