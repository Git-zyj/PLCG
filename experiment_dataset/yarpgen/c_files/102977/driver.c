#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9099671116045330567LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -3915697748232060500LL;
int var_6 = -102149271;
signed char var_9 = (signed char)80;
int zero = 0;
unsigned long long int var_10 = 9430181224320508227ULL;
int var_11 = 296429266;
long long int var_12 = 7861084633794943736LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
