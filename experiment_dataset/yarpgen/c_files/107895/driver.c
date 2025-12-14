#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5845688817663571784LL;
unsigned int var_2 = 1937011993U;
unsigned long long int var_3 = 7451171987458962009ULL;
long long int var_8 = 7601989600150858925LL;
_Bool var_10 = (_Bool)1;
short var_13 = (short)26158;
signed char var_14 = (signed char)111;
unsigned short var_15 = (unsigned short)11125;
unsigned short var_17 = (unsigned short)25220;
int zero = 0;
unsigned char var_18 = (unsigned char)69;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)18102;
unsigned char var_21 = (unsigned char)51;
void init() {
}

void checksum() {
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
