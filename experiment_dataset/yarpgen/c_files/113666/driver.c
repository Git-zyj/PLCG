#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5550239469600930630LL;
long long int var_5 = -8381502344686610522LL;
_Bool var_7 = (_Bool)1;
long long int var_10 = 6447014017594976822LL;
short var_13 = (short)10477;
long long int var_14 = -5291986360438627441LL;
unsigned int var_16 = 483547863U;
int zero = 0;
unsigned long long int var_17 = 14803589467886598233ULL;
unsigned long long int var_18 = 8352507028454948285ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
