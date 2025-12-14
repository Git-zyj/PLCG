#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 919742227;
long long int var_3 = -4155692957910778209LL;
long long int var_4 = 3182792779359262091LL;
long long int var_11 = 5305174173455095835LL;
unsigned long long int var_15 = 5593601833394413662ULL;
long long int var_17 = -5691961263821537004LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12808336358849986184ULL;
unsigned short var_21 = (unsigned short)52961;
long long int var_22 = 2387873162681778275LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
