#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1716740325;
unsigned short var_2 = (unsigned short)29524;
unsigned long long int var_3 = 11565534106026118212ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 15593367408174319284ULL;
int zero = 0;
short var_12 = (short)31697;
short var_13 = (short)19653;
_Bool var_14 = (_Bool)0;
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
