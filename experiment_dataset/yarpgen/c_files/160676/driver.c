#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -5278556602194688784LL;
long long int var_14 = 8293759742080498398LL;
int zero = 0;
unsigned long long int var_19 = 16765287028624870727ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)32556;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
