#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6486134014089632231LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
signed char var_20 = (signed char)-94;
long long int var_21 = -3126931048059944728LL;
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
