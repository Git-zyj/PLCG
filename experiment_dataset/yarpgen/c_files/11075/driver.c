#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)15;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 2362563464469983907ULL;
unsigned short var_6 = (unsigned short)7954;
long long int var_8 = -3970685910498155238LL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-39;
unsigned char var_11 = (unsigned char)141;
short var_13 = (short)26593;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -5270002764908039200LL;
int var_17 = -1951897545;
unsigned short var_18 = (unsigned short)35263;
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
