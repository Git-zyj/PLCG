#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1934048675;
int var_1 = -849023737;
unsigned short var_2 = (unsigned short)64543;
long long int var_3 = 7683754080092643091LL;
int var_4 = -2000425797;
long long int var_5 = 4230931289505016024LL;
short var_7 = (short)14650;
unsigned int var_8 = 1070121799U;
long long int var_9 = -4949534579869331626LL;
short var_10 = (short)10835;
int zero = 0;
long long int var_11 = 3830571244729376881LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)65149;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
