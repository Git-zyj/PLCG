#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5214276449083251418ULL;
long long int var_1 = 6429497782547289861LL;
long long int var_3 = 7651765080463448329LL;
unsigned short var_6 = (unsigned short)53404;
unsigned short var_7 = (unsigned short)11372;
unsigned long long int var_9 = 14578995083621123291ULL;
long long int var_10 = 1178984665083774604LL;
unsigned short var_12 = (unsigned short)36037;
unsigned short var_14 = (unsigned short)48469;
unsigned short var_16 = (unsigned short)26816;
int zero = 0;
int var_19 = -191822504;
long long int var_20 = 1858842770268671023LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
