#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5315974521449466635ULL;
int zero = 0;
long long int var_14 = 3164930431933676959LL;
unsigned long long int var_15 = 4558241743210434729ULL;
long long int var_16 = -4819682640794094846LL;
unsigned short var_17 = (unsigned short)764;
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
