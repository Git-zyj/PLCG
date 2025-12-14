#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1663354459;
unsigned long long int var_10 = 10091983164304020407ULL;
long long int var_11 = 6496839846983485781LL;
short var_13 = (short)-25140;
signed char var_14 = (signed char)0;
long long int var_15 = 2889186606453388552LL;
short var_16 = (short)31974;
long long int var_17 = 7839740197246072770LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)57562;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
