#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8198214834660804045LL;
unsigned long long int var_5 = 10240078002400354330ULL;
unsigned long long int var_6 = 14455038971205519840ULL;
short var_7 = (short)-1513;
long long int var_8 = 3371471438411086576LL;
short var_10 = (short)23897;
int var_13 = -1581683991;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3160686827036392063LL;
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
