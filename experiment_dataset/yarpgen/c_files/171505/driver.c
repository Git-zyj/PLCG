#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-26;
unsigned short var_3 = (unsigned short)57039;
int var_4 = 484716768;
short var_5 = (short)25649;
int var_6 = -1652659730;
int var_7 = -1723037083;
unsigned char var_8 = (unsigned char)141;
short var_12 = (short)17238;
short var_13 = (short)26735;
int var_14 = -1681687414;
int zero = 0;
int var_16 = -435985438;
unsigned long long int var_17 = 18408151313213569931ULL;
_Bool var_18 = (_Bool)0;
int var_19 = 1433353229;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
