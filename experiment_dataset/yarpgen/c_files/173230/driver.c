#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14675;
unsigned int var_1 = 3177221454U;
signed char var_5 = (signed char)-62;
signed char var_7 = (signed char)-11;
_Bool var_8 = (_Bool)0;
short var_9 = (short)7859;
short var_10 = (short)-1044;
unsigned int var_11 = 2305244928U;
short var_12 = (short)-3231;
int zero = 0;
long long int var_13 = 9046458136386843461LL;
short var_14 = (short)4591;
int var_15 = -1594181168;
int var_16 = 1739740930;
long long int var_17 = 7715105720933491543LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
