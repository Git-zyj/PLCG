#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11749;
long long int var_1 = -7300570375294469169LL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)45;
long long int var_5 = 3992261938628505959LL;
signed char var_8 = (signed char)-54;
unsigned long long int var_9 = 11329128623834042602ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)48;
long long int var_17 = 7316364600930391573LL;
void init() {
}

void checksum() {
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
