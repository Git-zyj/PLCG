#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4541917944789241682LL;
unsigned long long int var_2 = 8316227592208005868ULL;
unsigned char var_3 = (unsigned char)129;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)80;
unsigned int var_8 = 2522849897U;
int zero = 0;
unsigned long long int var_10 = 10699803567711999747ULL;
long long int var_11 = -293694872493971934LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
