#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56001;
unsigned short var_5 = (unsigned short)22018;
unsigned short var_6 = (unsigned short)59374;
unsigned long long int var_7 = 13584846823582387209ULL;
unsigned short var_9 = (unsigned short)31227;
unsigned long long int var_10 = 15558922790522250619ULL;
int zero = 0;
short var_11 = (short)-1474;
unsigned long long int var_12 = 1819465068614546655ULL;
short var_13 = (short)740;
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
