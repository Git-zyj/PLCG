#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)60;
unsigned long long int var_3 = 7470384784248081022ULL;
unsigned long long int var_4 = 7408889717346855541ULL;
int var_6 = -1704277046;
long long int var_7 = 1937478390874346352LL;
long long int var_12 = -8789212392229067502LL;
signed char var_14 = (signed char)101;
short var_17 = (short)-4976;
int zero = 0;
signed char var_18 = (signed char)-125;
long long int var_19 = 8183522888547414737LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
