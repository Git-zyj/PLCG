#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1556045695;
long long int var_1 = -7127036600593437655LL;
long long int var_2 = 415811060055928712LL;
signed char var_6 = (signed char)-39;
unsigned char var_9 = (unsigned char)246;
signed char var_10 = (signed char)-2;
unsigned short var_12 = (unsigned short)33165;
signed char var_14 = (signed char)80;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -4509627977056929512LL;
signed char var_17 = (signed char)16;
signed char var_18 = (signed char)89;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
