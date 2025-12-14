#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3452044832U;
unsigned char var_4 = (unsigned char)59;
long long int var_6 = 1442780982003254449LL;
unsigned int var_8 = 3031709490U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1191644024U;
long long int var_15 = -1630772147885507956LL;
signed char var_16 = (signed char)-127;
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
