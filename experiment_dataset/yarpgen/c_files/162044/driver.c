#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4353349616438102237ULL;
int var_9 = -310016458;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 18379947603984771430ULL;
unsigned short var_15 = (unsigned short)61784;
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
