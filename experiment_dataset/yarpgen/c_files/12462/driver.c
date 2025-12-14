#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27659;
signed char var_3 = (signed char)-20;
long long int var_5 = 8645329774030264847LL;
unsigned long long int var_9 = 3955705718619935737ULL;
unsigned int var_11 = 3149667922U;
signed char var_13 = (signed char)117;
signed char var_14 = (signed char)125;
int zero = 0;
unsigned long long int var_18 = 17223356756404027717ULL;
signed char var_19 = (signed char)-126;
long long int var_20 = 6190071225900107955LL;
unsigned short var_21 = (unsigned short)52935;
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
