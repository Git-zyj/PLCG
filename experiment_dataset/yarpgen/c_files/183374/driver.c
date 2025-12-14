#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
short var_1 = (short)-27991;
unsigned long long int var_4 = 3919268567766487276ULL;
int var_7 = -638985814;
int var_8 = 573817220;
short var_9 = (short)-21994;
long long int var_12 = 3868225180577902073LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3024233567U;
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
