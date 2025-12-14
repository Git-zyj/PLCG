#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 217332429U;
unsigned char var_2 = (unsigned char)40;
unsigned short var_3 = (unsigned short)15348;
long long int var_6 = -6357684602664044702LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1623097873U;
int var_14 = 153520571;
void init() {
}

void checksum() {
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
