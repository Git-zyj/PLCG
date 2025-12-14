#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1421440035718775740LL;
int var_6 = -1464415365;
unsigned char var_7 = (unsigned char)87;
unsigned int var_13 = 1950247266U;
signed char var_14 = (signed char)-106;
int var_15 = -282776788;
int var_16 = -89333638;
int zero = 0;
long long int var_18 = 7155966188746469230LL;
int var_19 = 2072721841;
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
