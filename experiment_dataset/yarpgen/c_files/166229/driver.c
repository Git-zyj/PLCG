#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2034759013166791577LL;
short var_7 = (short)-5663;
short var_9 = (short)28028;
long long int var_10 = -6028452335319798682LL;
unsigned int var_11 = 708852888U;
long long int var_12 = -1107295292720566827LL;
unsigned long long int var_13 = 8348195011732129193ULL;
int zero = 0;
short var_16 = (short)20542;
unsigned long long int var_17 = 7212767740896330036ULL;
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
