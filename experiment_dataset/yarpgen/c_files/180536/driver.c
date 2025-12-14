#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9098487174276033116LL;
unsigned char var_1 = (unsigned char)164;
unsigned int var_6 = 1773725976U;
unsigned int var_7 = 2180155675U;
short var_8 = (short)5361;
short var_11 = (short)-29305;
long long int var_12 = -1642371566708133647LL;
int zero = 0;
short var_14 = (short)-4261;
unsigned int var_15 = 2787492817U;
long long int var_16 = 1238186769165119323LL;
short var_17 = (short)22997;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
