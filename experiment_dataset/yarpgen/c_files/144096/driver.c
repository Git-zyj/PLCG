#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14626738119598035874ULL;
long long int var_7 = 596769578142937425LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11143143106295621748ULL;
unsigned long long int var_14 = 4774157342379355313ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
