#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8607753842663062185LL;
int var_6 = 436311605;
unsigned char var_10 = (unsigned char)250;
short var_12 = (short)-25676;
int zero = 0;
short var_13 = (short)-30871;
_Bool var_14 = (_Bool)1;
int var_15 = -114092465;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
