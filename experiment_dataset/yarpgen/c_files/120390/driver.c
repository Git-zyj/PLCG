#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -721477322;
int var_5 = 1404195500;
signed char var_7 = (signed char)-85;
signed char var_9 = (signed char)-102;
int zero = 0;
unsigned char var_12 = (unsigned char)9;
short var_13 = (short)5636;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
