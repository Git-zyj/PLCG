#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
long long int var_2 = -970703871256131319LL;
unsigned short var_4 = (unsigned short)34778;
signed char var_8 = (signed char)-69;
int var_9 = -1669450196;
unsigned char var_12 = (unsigned char)85;
int zero = 0;
unsigned long long int var_16 = 9000586171070175375ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
