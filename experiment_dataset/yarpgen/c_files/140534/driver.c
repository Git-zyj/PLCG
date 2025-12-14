#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
int var_1 = -190128803;
int var_5 = -1444708614;
signed char var_6 = (signed char)-14;
int var_7 = 1401808676;
signed char var_8 = (signed char)-8;
unsigned long long int var_9 = 2132815659067281393ULL;
signed char var_11 = (signed char)-127;
int zero = 0;
int var_12 = 1989908190;
unsigned long long int var_13 = 1667744790709823758ULL;
unsigned int var_14 = 939777710U;
signed char var_15 = (signed char)-82;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
