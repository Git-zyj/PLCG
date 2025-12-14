#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)83;
unsigned char var_3 = (unsigned char)38;
long long int var_4 = 2290739046054527515LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)93;
long long int var_8 = -1722041119736408082LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)164;
unsigned char var_13 = (unsigned char)57;
unsigned char var_14 = (unsigned char)52;
unsigned char var_15 = (unsigned char)193;
long long int var_16 = 1561466934263504456LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
