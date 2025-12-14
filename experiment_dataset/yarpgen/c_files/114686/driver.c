#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-2;
short var_3 = (short)14020;
long long int var_4 = 6560038367683936837LL;
int var_7 = -1773104638;
int var_8 = 256566362;
signed char var_9 = (signed char)-65;
short var_10 = (short)31872;
int zero = 0;
int var_11 = 1862953949;
unsigned long long int var_12 = 7918972018841529409ULL;
short var_13 = (short)24689;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
