#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6443189721152733202LL;
unsigned short var_4 = (unsigned short)16144;
long long int var_7 = 4088005898075306766LL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)180;
int var_12 = 1343904831;
int zero = 0;
long long int var_14 = 5737225205864150675LL;
unsigned char var_15 = (unsigned char)39;
int var_16 = -2070956778;
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
