#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32669;
short var_13 = (short)18264;
int zero = 0;
long long int var_18 = 3087518501730186389LL;
unsigned short var_19 = (unsigned short)54548;
long long int var_20 = -8355114616244789831LL;
unsigned int var_21 = 3903610962U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
