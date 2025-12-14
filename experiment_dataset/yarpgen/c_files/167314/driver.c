#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)80;
unsigned short var_12 = (unsigned short)52209;
short var_15 = (short)14969;
unsigned short var_17 = (unsigned short)25275;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)49;
unsigned long long int var_21 = 6462629859829339033ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
