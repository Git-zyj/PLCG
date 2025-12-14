#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11427353855478432703ULL;
short var_5 = (short)-19412;
short var_6 = (short)18737;
int zero = 0;
unsigned short var_15 = (unsigned short)12963;
_Bool var_16 = (_Bool)1;
long long int var_17 = 2863745378603167672LL;
void init() {
}

void checksum() {
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
