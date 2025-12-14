#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7996775451270815956LL;
signed char var_3 = (signed char)66;
signed char var_4 = (signed char)30;
unsigned long long int var_6 = 18399727863113351023ULL;
unsigned long long int var_7 = 18414103834192276115ULL;
unsigned long long int var_11 = 14126820023890296877ULL;
int zero = 0;
unsigned long long int var_13 = 1174628202537200975ULL;
long long int var_14 = -3263372938749075376LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 1335789682433231777LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
