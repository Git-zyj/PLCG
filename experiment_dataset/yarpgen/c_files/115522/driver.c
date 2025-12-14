#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 442741304274568424LL;
unsigned int var_3 = 4176042312U;
unsigned int var_13 = 3629902724U;
unsigned char var_14 = (unsigned char)102;
int zero = 0;
long long int var_15 = 1537175020626039044LL;
long long int var_16 = -8798016198751383492LL;
unsigned long long int var_17 = 6371657022564111843ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
