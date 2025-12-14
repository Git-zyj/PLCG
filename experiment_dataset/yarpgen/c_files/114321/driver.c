#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6216647146395039848ULL;
short var_4 = (short)-27681;
long long int var_11 = 5225009918570257129LL;
unsigned char var_16 = (unsigned char)212;
int zero = 0;
unsigned int var_19 = 2542063379U;
int var_20 = 1250167140;
long long int var_21 = -1669250297231547916LL;
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
