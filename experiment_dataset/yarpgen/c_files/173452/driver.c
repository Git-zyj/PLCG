#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16485043024361193585ULL;
long long int var_1 = 6626492180243841988LL;
int var_2 = -1060077879;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-48;
long long int var_5 = 41865815904148497LL;
unsigned short var_6 = (unsigned short)48581;
unsigned char var_7 = (unsigned char)18;
long long int var_8 = 9038984598157727929LL;
unsigned short var_9 = (unsigned short)39600;
unsigned short var_10 = (unsigned short)35079;
_Bool var_11 = (_Bool)0;
long long int var_12 = 871112559781564530LL;
unsigned short var_13 = (unsigned short)38787;
signed char var_14 = (signed char)116;
int zero = 0;
unsigned long long int var_16 = 14549276670602362329ULL;
int var_17 = -1596368648;
unsigned short var_18 = (unsigned short)32935;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
