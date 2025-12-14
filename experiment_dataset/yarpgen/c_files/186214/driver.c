#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15525657166571479577ULL;
unsigned int var_4 = 3550754049U;
unsigned char var_5 = (unsigned char)121;
unsigned long long int var_7 = 9211510599571459561ULL;
unsigned long long int var_8 = 6732629419692349712ULL;
short var_9 = (short)18873;
long long int var_11 = -780490869265394488LL;
unsigned char var_12 = (unsigned char)88;
unsigned long long int var_13 = 5531102347565296548ULL;
signed char var_15 = (signed char)-121;
long long int var_17 = 5473881174036255511LL;
int zero = 0;
unsigned long long int var_20 = 10767423281702113289ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
