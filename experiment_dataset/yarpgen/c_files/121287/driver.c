#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6046199557606524054ULL;
unsigned short var_3 = (unsigned short)17916;
_Bool var_5 = (_Bool)0;
signed char var_11 = (signed char)-58;
int var_17 = 795124316;
int zero = 0;
long long int var_19 = 6704865529756997598LL;
int var_20 = -289317102;
void init() {
}

void checksum() {
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
