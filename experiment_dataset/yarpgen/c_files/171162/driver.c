#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)14;
short var_3 = (short)11578;
long long int var_4 = 530699023571035369LL;
unsigned int var_5 = 2433657217U;
int zero = 0;
unsigned int var_10 = 3515315023U;
unsigned int var_11 = 370733852U;
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
