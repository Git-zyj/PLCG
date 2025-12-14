#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3762638977U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 14551043962256867937ULL;
signed char var_5 = (signed char)11;
long long int var_6 = 6966723819685302394LL;
unsigned long long int var_7 = 18184150677261275678ULL;
long long int var_8 = 2091967461427531446LL;
signed char var_9 = (signed char)37;
unsigned long long int var_11 = 10424886878141087042ULL;
unsigned long long int var_12 = 11068395449760306526ULL;
unsigned short var_14 = (unsigned short)6080;
unsigned long long int var_15 = 5820759284150725642ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)15239;
signed char var_17 = (signed char)-46;
signed char var_18 = (signed char)-112;
unsigned short var_19 = (unsigned short)12058;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
