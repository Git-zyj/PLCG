#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26706;
int var_1 = 951926409;
int var_7 = -1553201028;
short var_9 = (short)12507;
unsigned int var_10 = 675309796U;
unsigned short var_11 = (unsigned short)37141;
int zero = 0;
unsigned short var_13 = (unsigned short)7727;
unsigned int var_14 = 195486369U;
int var_15 = -303847332;
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
