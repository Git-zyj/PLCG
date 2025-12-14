#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12776042599106197545ULL;
long long int var_1 = 2031413845012098840LL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-18;
unsigned long long int var_5 = 9528594632140396340ULL;
int var_7 = 1258374945;
int var_8 = -2047052322;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -5982535799638321277LL;
int var_12 = 717140464;
unsigned long long int var_13 = 13375146541143319233ULL;
long long int var_14 = -8238815605013146757LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
