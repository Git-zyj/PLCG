#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_11 = (short)5375;
long long int var_14 = -5902563301716315538LL;
unsigned char var_17 = (unsigned char)138;
int zero = 0;
unsigned char var_18 = (unsigned char)53;
unsigned char var_19 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
