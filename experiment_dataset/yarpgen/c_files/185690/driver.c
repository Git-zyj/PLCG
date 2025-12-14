#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1887439231U;
long long int var_9 = -7899909869296435917LL;
unsigned long long int var_12 = 10863908088542464236ULL;
unsigned long long int var_13 = 9168799402234300242ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)177;
short var_17 = (short)-28011;
unsigned char var_18 = (unsigned char)80;
short var_19 = (short)-32743;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
