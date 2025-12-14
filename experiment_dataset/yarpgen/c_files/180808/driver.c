#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
signed char var_1 = (signed char)112;
long long int var_2 = -5637038871456555432LL;
unsigned char var_3 = (unsigned char)128;
int var_5 = 1690722015;
unsigned long long int var_6 = 3861052357002987998ULL;
signed char var_7 = (signed char)-27;
long long int var_8 = 4977488350421924014LL;
long long int var_9 = 6282639972687665508LL;
unsigned char var_10 = (unsigned char)178;
long long int var_12 = 9211443714284029171LL;
unsigned long long int var_15 = 12751990720709243967ULL;
long long int var_16 = 6543860995836678183LL;
int zero = 0;
signed char var_18 = (signed char)14;
unsigned long long int var_19 = 12591297526178738283ULL;
signed char var_20 = (signed char)13;
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
