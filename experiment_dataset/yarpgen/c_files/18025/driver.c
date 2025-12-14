#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6134240747519111863ULL;
int var_12 = 2098740229;
int zero = 0;
unsigned long long int var_19 = 9729648262873105435ULL;
int var_20 = 216311456;
unsigned short var_21 = (unsigned short)41273;
unsigned long long int var_22 = 1238846339616822160ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
