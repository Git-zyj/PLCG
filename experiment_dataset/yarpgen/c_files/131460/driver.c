#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = 1459329263;
long long int var_6 = 9053411029689889622LL;
unsigned long long int var_10 = 10176941241033191704ULL;
signed char var_11 = (signed char)83;
int zero = 0;
unsigned char var_15 = (unsigned char)110;
unsigned short var_16 = (unsigned short)35728;
unsigned long long int var_17 = 6587715809684311325ULL;
unsigned char var_18 = (unsigned char)142;
unsigned char var_19 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
