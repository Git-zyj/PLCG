#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2704814993U;
unsigned char var_1 = (unsigned char)220;
unsigned int var_2 = 1391786647U;
unsigned long long int var_5 = 14785446766454758309ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -7139422695234620170LL;
short var_9 = (short)-25111;
int zero = 0;
unsigned short var_10 = (unsigned short)27698;
short var_11 = (short)7066;
unsigned char var_12 = (unsigned char)147;
short var_13 = (short)3394;
signed char var_14 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
