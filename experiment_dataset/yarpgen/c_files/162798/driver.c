#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45273;
unsigned short var_2 = (unsigned short)34968;
int var_3 = -1277340247;
int var_4 = 1239153225;
short var_9 = (short)-13007;
int zero = 0;
short var_10 = (short)8261;
int var_11 = 982669508;
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
