#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3327310664803750823LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 16697346111987697364ULL;
short var_6 = (short)16920;
unsigned int var_9 = 1937906784U;
signed char var_11 = (signed char)117;
unsigned long long int var_12 = 16065220174251915700ULL;
short var_15 = (short)32088;
int zero = 0;
short var_18 = (short)1910;
unsigned int var_19 = 361709297U;
unsigned long long int var_20 = 17503695740453661050ULL;
unsigned long long int var_21 = 15170253682909098464ULL;
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
