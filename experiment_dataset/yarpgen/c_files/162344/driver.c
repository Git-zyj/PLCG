#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5831480748413993097LL;
short var_2 = (short)-28142;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7269031693569913308ULL;
int var_10 = 367300746;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1979635160267273309LL;
unsigned long long int var_16 = 375692222886498344ULL;
long long int var_17 = -9197034383069542195LL;
long long int var_18 = -366766978288449663LL;
int zero = 0;
long long int var_20 = -4401133278620852269LL;
int var_21 = 914873841;
unsigned char var_22 = (unsigned char)53;
void init() {
}

void checksum() {
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
