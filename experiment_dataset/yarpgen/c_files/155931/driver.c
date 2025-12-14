#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 810259693176395291LL;
unsigned long long int var_3 = 18255119848772417030ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)238;
int var_8 = -763680699;
unsigned long long int var_11 = 3958146023196988777ULL;
int zero = 0;
long long int var_14 = -5720881159173652395LL;
long long int var_15 = 4988120918537972438LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7960647255503362034LL;
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
