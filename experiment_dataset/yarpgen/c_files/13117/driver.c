#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)23;
unsigned long long int var_2 = 1396879035473822947ULL;
unsigned int var_5 = 731815860U;
short var_7 = (short)-23349;
long long int var_9 = -4891586880068366778LL;
long long int var_10 = 3816248188579235797LL;
signed char var_11 = (signed char)83;
unsigned short var_13 = (unsigned short)48675;
int var_14 = -1227898187;
int var_15 = 1460288354;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 2178280710701095609LL;
unsigned long long int var_21 = 9372061780842494892ULL;
long long int var_22 = 9167204540242716360LL;
int var_23 = 928214131;
unsigned long long int var_24 = 3527907713998636012ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
