#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2970716342945026751LL;
unsigned long long int var_4 = 14531605695216277487ULL;
unsigned short var_5 = (unsigned short)13543;
signed char var_8 = (signed char)69;
unsigned long long int var_10 = 749132575973260788ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)126;
unsigned short var_12 = (unsigned short)15813;
unsigned short var_13 = (unsigned short)44313;
unsigned char var_14 = (unsigned char)64;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
