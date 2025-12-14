#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2051664200;
int var_1 = 463198990;
int var_3 = 1008319796;
unsigned int var_7 = 3007283903U;
unsigned char var_9 = (unsigned char)209;
int var_10 = -1800683074;
unsigned long long int var_11 = 2368344204122480626ULL;
unsigned int var_13 = 2860416194U;
int var_14 = -476839764;
int zero = 0;
unsigned long long int var_16 = 18000638537826622768ULL;
unsigned long long int var_17 = 15374557079909288207ULL;
unsigned short var_18 = (unsigned short)36595;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
