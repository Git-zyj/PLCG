#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
long long int var_3 = -6957181920547611377LL;
unsigned long long int var_5 = 6297787257466367178ULL;
unsigned int var_7 = 3445756136U;
signed char var_9 = (signed char)46;
short var_10 = (short)17663;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)77;
signed char var_13 = (signed char)-5;
long long int var_14 = -1840788128221264900LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
