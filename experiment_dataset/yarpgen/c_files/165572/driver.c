#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3793;
long long int var_3 = -3072334849557929326LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4218601657068672600ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)19659;
long long int var_10 = -6768998470153643483LL;
short var_12 = (short)1533;
unsigned long long int var_13 = 14179616330043026676ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)169;
unsigned int var_15 = 1147582030U;
unsigned short var_16 = (unsigned short)42427;
unsigned long long int var_17 = 1084731060894363744ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
