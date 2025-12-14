#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45344;
unsigned short var_1 = (unsigned short)18139;
unsigned short var_4 = (unsigned short)15420;
unsigned short var_5 = (unsigned short)36577;
unsigned short var_6 = (unsigned short)17765;
unsigned short var_9 = (unsigned short)9171;
int zero = 0;
unsigned short var_13 = (unsigned short)4507;
unsigned short var_14 = (unsigned short)40374;
unsigned short var_15 = (unsigned short)38114;
void init() {
}

void checksum() {
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
