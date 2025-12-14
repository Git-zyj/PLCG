#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14023262580807742681ULL;
unsigned int var_1 = 2620124893U;
long long int var_4 = -8765684538877102726LL;
int var_6 = -1185722589;
int var_7 = 433277714;
int var_8 = -1285906718;
unsigned int var_9 = 552626289U;
signed char var_11 = (signed char)37;
long long int var_13 = -5529830865025877369LL;
short var_14 = (short)-9391;
signed char var_15 = (signed char)13;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 18030458525508128022ULL;
int zero = 0;
signed char var_18 = (signed char)26;
int var_19 = -1040663455;
void init() {
}

void checksum() {
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
