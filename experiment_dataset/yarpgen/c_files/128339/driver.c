#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)724;
int var_1 = 90667055;
long long int var_4 = -6664368856190946323LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 3744471470281263377ULL;
short var_11 = (short)-5802;
unsigned short var_12 = (unsigned short)17977;
int var_13 = 248497361;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17742674952487064372ULL;
int zero = 0;
short var_17 = (short)-10681;
unsigned char var_18 = (unsigned char)117;
void init() {
}

void checksum() {
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
