#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2676734853485817290LL;
unsigned short var_3 = (unsigned short)20232;
long long int var_4 = 4656579937481009700LL;
long long int var_5 = 1805933348368824040LL;
int zero = 0;
long long int var_11 = -2442369824515569204LL;
int var_12 = 1456318406;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
