#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
long long int var_3 = -6547448430051139998LL;
short var_8 = (short)22001;
unsigned short var_12 = (unsigned short)62275;
unsigned short var_14 = (unsigned short)10523;
unsigned int var_15 = 352150209U;
int zero = 0;
long long int var_19 = -6336936788907123937LL;
signed char var_20 = (signed char)-14;
short var_21 = (short)-22893;
unsigned int var_22 = 3202293463U;
int var_23 = -1245507505;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
