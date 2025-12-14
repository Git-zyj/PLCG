#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6389308016842569347LL;
unsigned char var_2 = (unsigned char)5;
short var_9 = (short)-28152;
int var_10 = 922848131;
unsigned long long int var_18 = 2313437026931339630ULL;
int zero = 0;
unsigned int var_19 = 62030148U;
short var_20 = (short)13341;
int var_21 = -971836035;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
