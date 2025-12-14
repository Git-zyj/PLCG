#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7122083094958430489LL;
unsigned short var_1 = (unsigned short)25851;
unsigned short var_4 = (unsigned short)43906;
unsigned long long int var_6 = 197736235579682418ULL;
unsigned long long int var_9 = 2642864241782339979ULL;
int var_11 = -874800763;
long long int var_12 = 3478941524499829317LL;
int zero = 0;
unsigned short var_14 = (unsigned short)7709;
int var_15 = 1853340776;
int var_16 = 385849221;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
