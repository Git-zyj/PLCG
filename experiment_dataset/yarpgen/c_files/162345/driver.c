#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1448;
long long int var_2 = -4940667480914655743LL;
long long int var_3 = -751960829758919321LL;
signed char var_4 = (signed char)-82;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)10804;
unsigned long long int var_8 = 2788269152742482878ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)61134;
unsigned long long int var_11 = 4197994249367419864ULL;
long long int var_12 = 1131014067547229150LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
