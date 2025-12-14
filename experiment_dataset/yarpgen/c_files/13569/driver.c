#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
signed char var_2 = (signed char)111;
short var_3 = (short)6505;
unsigned char var_5 = (unsigned char)58;
long long int var_7 = -1181648378286486943LL;
unsigned int var_8 = 1354829034U;
long long int var_9 = 7196741672405280528LL;
short var_10 = (short)3698;
int var_11 = -242314193;
unsigned short var_12 = (unsigned short)56455;
signed char var_14 = (signed char)-34;
unsigned short var_15 = (unsigned short)12027;
int zero = 0;
int var_17 = -469175723;
signed char var_18 = (signed char)79;
unsigned char var_19 = (unsigned char)141;
long long int var_20 = 8187236594286593311LL;
unsigned int var_21 = 2893791530U;
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
