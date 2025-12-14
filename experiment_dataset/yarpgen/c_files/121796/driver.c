#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1346866689;
unsigned long long int var_3 = 3115134683609220217ULL;
int var_5 = 2080159108;
short var_9 = (short)15105;
int zero = 0;
unsigned int var_10 = 3188346655U;
short var_11 = (short)7136;
int var_12 = -1522617502;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
