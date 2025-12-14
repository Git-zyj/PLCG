#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2415462639147631694LL;
signed char var_1 = (signed char)-105;
unsigned long long int var_2 = 3264995795696870654ULL;
unsigned long long int var_3 = 2998284760697601655ULL;
long long int var_6 = -2438778447833166478LL;
unsigned int var_7 = 4092472547U;
unsigned long long int var_8 = 3905408903396562000ULL;
short var_10 = (short)19298;
unsigned int var_11 = 2990675415U;
long long int var_13 = 1786221098289310966LL;
unsigned int var_14 = 3349608194U;
int var_17 = -56285988;
long long int var_18 = -2497810440638480701LL;
int zero = 0;
unsigned long long int var_19 = 8681060918727120986ULL;
unsigned char var_20 = (unsigned char)8;
signed char var_21 = (signed char)-108;
long long int var_22 = -2529291569714639075LL;
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
