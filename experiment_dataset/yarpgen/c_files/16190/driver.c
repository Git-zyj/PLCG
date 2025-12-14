#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5717161518628607619LL;
int var_1 = 1694816274;
int var_2 = -1065403981;
long long int var_3 = 9205837069832029915LL;
short var_5 = (short)15457;
short var_9 = (short)-3928;
long long int var_10 = 5656340254916332901LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
long long int var_14 = -6529603036318358670LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7243566041786265528LL;
int var_22 = -609905324;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
