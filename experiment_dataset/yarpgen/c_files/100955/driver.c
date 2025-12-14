#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1282991034939777036ULL;
unsigned short var_2 = (unsigned short)56067;
unsigned short var_6 = (unsigned short)25806;
unsigned short var_7 = (unsigned short)5194;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3177040409U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
