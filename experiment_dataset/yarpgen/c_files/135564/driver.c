#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 718293816;
_Bool var_1 = (_Bool)0;
short var_2 = (short)30287;
unsigned short var_3 = (unsigned short)37350;
int var_4 = -1018528621;
short var_5 = (short)10311;
unsigned long long int var_6 = 11496218676312882924ULL;
int var_7 = -1466176016;
unsigned long long int var_8 = 4911967519163400479ULL;
long long int var_9 = 6434373811913707795LL;
unsigned long long int var_10 = 14682584219307949556ULL;
unsigned int var_12 = 3574325066U;
int var_13 = -1876401726;
unsigned long long int var_14 = 3942395367772207740ULL;
int zero = 0;
long long int var_15 = -8333729360750144297LL;
int var_16 = 1422771514;
unsigned long long int var_17 = 11934165607596928903ULL;
signed char var_18 = (signed char)-91;
void init() {
}

void checksum() {
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
