#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17742798000842488958ULL;
long long int var_2 = -4735341539672735785LL;
unsigned short var_5 = (unsigned short)5942;
int var_8 = 1979012006;
unsigned short var_9 = (unsigned short)31709;
int zero = 0;
unsigned int var_10 = 2347199265U;
unsigned int var_11 = 1367825949U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
