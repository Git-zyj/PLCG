#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13705;
signed char var_4 = (signed char)-127;
unsigned long long int var_15 = 8991761196363771394ULL;
unsigned long long int var_16 = 3957248713699750582ULL;
short var_17 = (short)-24727;
int zero = 0;
int var_19 = 1356243262;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)89;
void init() {
}

void checksum() {
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
