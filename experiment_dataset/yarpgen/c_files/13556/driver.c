#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -584151864271412168LL;
unsigned char var_3 = (unsigned char)19;
unsigned char var_4 = (unsigned char)158;
unsigned char var_5 = (unsigned char)142;
unsigned int var_6 = 2875001820U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)21;
unsigned long long int var_10 = 8113347260957603602ULL;
unsigned int var_11 = 2000681808U;
int var_12 = -1855729539;
unsigned long long int var_13 = 5081185858197912451ULL;
unsigned int var_14 = 494584418U;
unsigned char var_16 = (unsigned char)127;
unsigned long long int var_17 = 15662995645444024845ULL;
long long int var_18 = 2081568068842861746LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)116;
void init() {
}

void checksum() {
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
