#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11218187225674307218ULL;
int var_1 = -1950441224;
int var_2 = 1242869545;
short var_3 = (short)-5990;
int var_4 = 1593951955;
int var_5 = -704790234;
int var_6 = 623759151;
short var_7 = (short)-17770;
int var_9 = -1859188063;
int var_10 = -1694478564;
int var_11 = 2037734861;
int zero = 0;
unsigned long long int var_13 = 11927799958151493723ULL;
int var_14 = 407326441;
void init() {
}

void checksum() {
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
