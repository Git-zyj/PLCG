#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1950775235;
unsigned char var_4 = (unsigned char)253;
long long int var_5 = -7265787463248859562LL;
long long int var_11 = 5616691374714741326LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)-5920;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3049742322230968111LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
