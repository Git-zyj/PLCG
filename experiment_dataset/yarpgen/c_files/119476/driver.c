#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1959364845821159004ULL;
unsigned short var_5 = (unsigned short)55834;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-80;
long long int var_13 = -1246028889923105017LL;
unsigned long long int var_15 = 6881095285357616625ULL;
long long int var_16 = 8887936776668201841LL;
int zero = 0;
unsigned long long int var_17 = 16146524461348365650ULL;
unsigned long long int var_18 = 558236455419680416ULL;
int var_19 = 718618301;
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
