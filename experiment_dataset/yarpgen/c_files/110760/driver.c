#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 712671163U;
long long int var_2 = -201076502593980493LL;
unsigned long long int var_5 = 11124684948215083961ULL;
long long int var_6 = 8699886657443954704LL;
unsigned char var_8 = (unsigned char)103;
int var_9 = -1084061871;
long long int var_11 = 24637205863500580LL;
unsigned int var_17 = 2324649100U;
int var_18 = -1546748987;
int zero = 0;
unsigned char var_20 = (unsigned char)226;
unsigned int var_21 = 498230672U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
