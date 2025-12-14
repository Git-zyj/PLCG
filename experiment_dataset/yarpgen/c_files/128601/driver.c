#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13097492687323872103ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)96;
unsigned long long int var_9 = 16057302872851046506ULL;
short var_10 = (short)-19560;
int zero = 0;
long long int var_11 = -432997892158256704LL;
unsigned int var_12 = 3207357215U;
unsigned char var_13 = (unsigned char)245;
int var_14 = -119153329;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
