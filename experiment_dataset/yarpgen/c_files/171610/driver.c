#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
long long int var_2 = -3533820072074196185LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 5709721526374174132LL;
unsigned short var_6 = (unsigned short)60598;
short var_12 = (short)21385;
long long int var_13 = 5414563157540909191LL;
long long int var_14 = -2833088927253505704LL;
unsigned long long int var_15 = 7846725111579839734ULL;
int zero = 0;
long long int var_18 = 3801479740050956967LL;
long long int var_19 = 8813892884675783516LL;
unsigned long long int var_20 = 13052960912784797552ULL;
unsigned short var_21 = (unsigned short)57490;
void init() {
}

void checksum() {
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
