#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9709;
unsigned char var_1 = (unsigned char)174;
unsigned short var_2 = (unsigned short)50655;
unsigned char var_4 = (unsigned char)9;
unsigned short var_8 = (unsigned short)37065;
long long int var_10 = -8611416108981623837LL;
int zero = 0;
long long int var_11 = -2383990521331253731LL;
signed char var_12 = (signed char)98;
unsigned long long int var_13 = 8719962575802982918ULL;
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
