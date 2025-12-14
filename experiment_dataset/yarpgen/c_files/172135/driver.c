#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4116425276145877979LL;
signed char var_1 = (signed char)53;
short var_2 = (short)22220;
signed char var_3 = (signed char)-60;
unsigned short var_4 = (unsigned short)53613;
int var_5 = 244801328;
short var_6 = (short)26499;
long long int var_7 = -2484523215160959364LL;
unsigned short var_8 = (unsigned short)51397;
long long int var_9 = 7253715016700260690LL;
unsigned char var_10 = (unsigned char)230;
unsigned long long int var_11 = 18099646990492527772ULL;
long long int var_12 = 2702544300586820112LL;
unsigned short var_13 = (unsigned short)1573;
int zero = 0;
unsigned int var_14 = 826292090U;
_Bool var_15 = (_Bool)1;
int var_16 = 16543138;
long long int var_17 = -2528325613488629584LL;
long long int var_18 = 7232636666806857885LL;
long long int var_19 = 8963379503881401389LL;
short var_20 = (short)26223;
unsigned short var_21 = (unsigned short)58441;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
