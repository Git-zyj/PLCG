#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -195280326;
unsigned long long int var_9 = 14544202610710854701ULL;
unsigned short var_14 = (unsigned short)31709;
int zero = 0;
unsigned short var_18 = (unsigned short)61680;
unsigned long long int var_19 = 7066529206703246646ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 840271675;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
