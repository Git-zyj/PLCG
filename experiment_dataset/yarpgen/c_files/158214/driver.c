#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5269527119830250456LL;
int var_9 = -956500707;
short var_16 = (short)10790;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 2223686390416368279LL;
signed char var_20 = (signed char)56;
signed char var_21 = (signed char)-1;
unsigned long long int var_22 = 543117704450703308ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
