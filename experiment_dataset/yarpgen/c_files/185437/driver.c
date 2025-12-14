#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6242744558642817590LL;
long long int var_2 = 4602402441047000601LL;
short var_4 = (short)-21710;
signed char var_6 = (signed char)76;
unsigned long long int var_7 = 9560635135626905240ULL;
unsigned short var_11 = (unsigned short)61655;
int var_12 = 1248651684;
int zero = 0;
long long int var_17 = 1629448417298851362LL;
short var_18 = (short)17693;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
