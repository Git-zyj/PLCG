#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2996632604U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 5130122840646468084LL;
short var_4 = (short)-19261;
unsigned char var_5 = (unsigned char)41;
unsigned int var_6 = 41365279U;
unsigned int var_11 = 272492379U;
int zero = 0;
int var_13 = 1299448331;
signed char var_14 = (signed char)89;
void init() {
}

void checksum() {
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
