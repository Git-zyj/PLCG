#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)59;
_Bool var_4 = (_Bool)0;
long long int var_8 = -8371664427071353210LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 1008237133632961994ULL;
long long int var_14 = 1256639090175620732LL;
unsigned char var_16 = (unsigned char)255;
long long int var_17 = 3113183405798786447LL;
long long int var_18 = 1143263817336912196LL;
int zero = 0;
unsigned long long int var_19 = 3311446698684054606ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -3767385464803656742LL;
unsigned long long int var_22 = 10828563979254514907ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
