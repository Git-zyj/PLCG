#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8226587634378206075ULL;
long long int var_2 = 2542794368775325160LL;
short var_4 = (short)18195;
unsigned long long int var_8 = 13574387770576247102ULL;
unsigned int var_9 = 686041858U;
int var_10 = -923188764;
unsigned int var_13 = 72874844U;
int zero = 0;
unsigned short var_17 = (unsigned short)28812;
long long int var_18 = -2695649862682579850LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)17250;
int var_21 = -146450337;
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
