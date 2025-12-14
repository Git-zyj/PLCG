#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)29;
unsigned int var_4 = 310749951U;
unsigned int var_5 = 55542915U;
unsigned short var_6 = (unsigned short)51788;
unsigned int var_9 = 763574805U;
int var_14 = -514074728;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7773630391468026947LL;
long long int var_19 = -6739252210508191919LL;
unsigned short var_20 = (unsigned short)33392;
unsigned long long int var_21 = 8147963584876454536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
