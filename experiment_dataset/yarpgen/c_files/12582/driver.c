#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1518318153U;
unsigned short var_8 = (unsigned short)18145;
int zero = 0;
unsigned short var_11 = (unsigned short)47942;
long long int var_12 = 6716998507354971310LL;
long long int var_13 = 5155675094435530301LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
