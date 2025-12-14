#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2348641926442644481ULL;
long long int var_5 = -7670157801659853766LL;
unsigned short var_7 = (unsigned short)42211;
int zero = 0;
unsigned long long int var_14 = 5791906167958979077ULL;
unsigned int var_15 = 3165984613U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
