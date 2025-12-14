#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5690791847593721112LL;
short var_3 = (short)11917;
_Bool var_4 = (_Bool)1;
int var_5 = 1168698749;
short var_7 = (short)8640;
long long int var_8 = -3393148118821784418LL;
long long int var_9 = 5133863272046053499LL;
long long int var_15 = 2912838503647880692LL;
int zero = 0;
short var_17 = (short)4366;
short var_18 = (short)-12848;
short var_19 = (short)1428;
signed char var_20 = (signed char)-60;
void init() {
}

void checksum() {
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
