#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-65;
signed char var_7 = (signed char)-125;
short var_10 = (short)-25645;
long long int var_13 = -6233122521491547906LL;
int zero = 0;
unsigned int var_14 = 3105334345U;
unsigned short var_15 = (unsigned short)9278;
unsigned long long int var_16 = 3367744061345616070ULL;
unsigned int var_17 = 1957705496U;
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
