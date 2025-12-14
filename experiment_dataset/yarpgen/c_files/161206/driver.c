#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)20231;
unsigned short var_6 = (unsigned short)34963;
unsigned short var_7 = (unsigned short)4775;
unsigned short var_10 = (unsigned short)44497;
unsigned short var_12 = (unsigned short)35566;
int zero = 0;
unsigned short var_13 = (unsigned short)34507;
unsigned short var_14 = (unsigned short)52060;
unsigned short var_15 = (unsigned short)49361;
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
