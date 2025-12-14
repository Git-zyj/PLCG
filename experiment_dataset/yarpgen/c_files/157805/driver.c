#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7432544931987493518LL;
_Bool var_2 = (_Bool)0;
long long int var_5 = -5420365888616010964LL;
unsigned long long int var_9 = 395389833025641095ULL;
short var_11 = (short)-14963;
unsigned short var_13 = (unsigned short)20838;
signed char var_14 = (signed char)-16;
long long int var_17 = 1305005521488452534LL;
int zero = 0;
long long int var_18 = -3449765448856395760LL;
long long int var_19 = 6103128043651659575LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
