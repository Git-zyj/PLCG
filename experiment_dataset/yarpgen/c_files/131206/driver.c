#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16682;
unsigned long long int var_5 = 4616143504019169586ULL;
unsigned long long int var_11 = 7023699167758554613ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)21;
signed char var_19 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
