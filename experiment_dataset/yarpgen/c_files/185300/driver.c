#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2494377459869034387LL;
unsigned int var_6 = 2033328083U;
signed char var_7 = (signed char)-68;
short var_10 = (short)-22052;
long long int var_12 = 3452038190797042713LL;
signed char var_13 = (signed char)52;
unsigned int var_14 = 1285820636U;
unsigned int var_16 = 2738800186U;
short var_17 = (short)12723;
signed char var_18 = (signed char)68;
int zero = 0;
signed char var_20 = (signed char)118;
long long int var_21 = -1710967911743809906LL;
int var_22 = 1696553154;
long long int var_23 = 527022208406148536LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
