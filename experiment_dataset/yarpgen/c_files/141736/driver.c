#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10571764040765985964ULL;
signed char var_3 = (signed char)85;
unsigned long long int var_4 = 9932748032635394753ULL;
signed char var_7 = (signed char)38;
unsigned short var_9 = (unsigned short)47712;
int zero = 0;
unsigned int var_12 = 520043357U;
unsigned char var_13 = (unsigned char)42;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
