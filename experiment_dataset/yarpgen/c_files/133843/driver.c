#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)199;
unsigned char var_6 = (unsigned char)153;
unsigned char var_11 = (unsigned char)85;
int zero = 0;
long long int var_16 = 6357889188014345544LL;
int var_17 = -1131267907;
int var_18 = 333664671;
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
