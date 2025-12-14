#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16790;
long long int var_2 = -3361739147679168069LL;
short var_5 = (short)22472;
short var_8 = (short)-1132;
unsigned int var_9 = 2699532378U;
short var_10 = (short)19088;
long long int var_11 = 6687357170423961015LL;
int zero = 0;
unsigned long long int var_12 = 17566937109768183099ULL;
unsigned long long int var_13 = 6014253250625264318ULL;
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
