#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17568181389529870266ULL;
unsigned int var_5 = 1390291451U;
long long int var_6 = -6042094283134106423LL;
int var_7 = -794653388;
int zero = 0;
long long int var_10 = 9021444092591817499LL;
unsigned char var_11 = (unsigned char)180;
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
