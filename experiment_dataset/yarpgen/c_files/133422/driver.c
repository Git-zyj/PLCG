#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2599;
_Bool var_15 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1415231762U;
unsigned char var_21 = (unsigned char)150;
unsigned long long int var_22 = 15589419557658484213ULL;
unsigned long long int var_23 = 1928321782801604465ULL;
void init() {
}

void checksum() {
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
