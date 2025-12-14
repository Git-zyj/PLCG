#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1866235297;
unsigned long long int var_1 = 12316353167462141604ULL;
unsigned char var_4 = (unsigned char)205;
unsigned int var_5 = 1057978316U;
unsigned long long int var_6 = 11417629281108121439ULL;
long long int var_8 = -3638550421901231980LL;
long long int var_9 = 2379846355016307127LL;
int var_10 = -1965995481;
unsigned long long int var_14 = 7189043629551428263ULL;
unsigned int var_15 = 2988674955U;
int var_16 = 1994033714;
unsigned short var_18 = (unsigned short)16714;
unsigned char var_19 = (unsigned char)181;
int zero = 0;
short var_20 = (short)-15463;
unsigned short var_21 = (unsigned short)21347;
unsigned short var_22 = (unsigned short)19182;
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
