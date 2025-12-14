#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17558563661477236926ULL;
unsigned char var_3 = (unsigned char)168;
_Bool var_4 = (_Bool)1;
int var_6 = 2108071752;
unsigned long long int var_10 = 4846805823333162251ULL;
long long int var_13 = -3933107357243521534LL;
int zero = 0;
unsigned long long int var_18 = 11884671514133561685ULL;
signed char var_19 = (signed char)-102;
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
