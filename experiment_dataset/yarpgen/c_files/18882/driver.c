#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11924;
short var_9 = (short)-1528;
unsigned char var_10 = (unsigned char)84;
unsigned int var_15 = 3357720849U;
int zero = 0;
unsigned long long int var_19 = 15267575302858448732ULL;
unsigned long long int var_20 = 5971566583372957421ULL;
unsigned long long int var_21 = 16902594035492124979ULL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)22253;
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
