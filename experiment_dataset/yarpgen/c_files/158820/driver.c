#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned int var_6 = 3818399982U;
unsigned char var_7 = (unsigned char)56;
short var_9 = (short)21352;
unsigned char var_10 = (unsigned char)163;
int var_11 = -494920042;
int var_14 = -1293379440;
unsigned char var_17 = (unsigned char)61;
unsigned short var_18 = (unsigned short)1585;
int zero = 0;
short var_19 = (short)-7168;
unsigned long long int var_20 = 1332848128368847423ULL;
int var_21 = -1899203202;
unsigned int var_22 = 98884891U;
int var_23 = 685839417;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
