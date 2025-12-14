#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 152556349U;
unsigned long long int var_4 = 3260591904510268627ULL;
unsigned char var_16 = (unsigned char)73;
int zero = 0;
long long int var_19 = 2606366681256375049LL;
unsigned int var_20 = 3467458684U;
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
