#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)40813;
unsigned short var_8 = (unsigned short)4313;
unsigned char var_9 = (unsigned char)49;
unsigned int var_10 = 27521695U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)20486;
int var_20 = 1561659440;
unsigned long long int var_21 = 12157470090231569135ULL;
void init() {
}

void checksum() {
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
