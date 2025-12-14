#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned long long int var_3 = 12879064545544751121ULL;
signed char var_4 = (signed char)-123;
signed char var_5 = (signed char)-12;
unsigned long long int var_7 = 12261595031399401423ULL;
long long int var_8 = 6316766729378649736LL;
unsigned long long int var_9 = 12574564595591190194ULL;
unsigned long long int var_10 = 14333414007399610779ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-6797;
unsigned int var_14 = 3080582699U;
int var_15 = -1545872108;
int zero = 0;
int var_16 = 878138088;
unsigned short var_17 = (unsigned short)39215;
long long int var_18 = 4585397187239763459LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
