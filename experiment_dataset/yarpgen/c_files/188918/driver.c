#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3611693079362741633LL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)8870;
signed char var_8 = (signed char)101;
signed char var_11 = (signed char)-82;
signed char var_13 = (signed char)-124;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 2134344348;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
