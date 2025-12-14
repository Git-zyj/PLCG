#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38288;
long long int var_4 = -7002389683840082573LL;
unsigned long long int var_7 = 7552020420062453662ULL;
unsigned short var_13 = (unsigned short)56677;
long long int var_18 = 2904973533973247782LL;
int zero = 0;
unsigned short var_19 = (unsigned short)54250;
signed char var_20 = (signed char)120;
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
