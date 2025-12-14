#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-115;
signed char var_9 = (signed char)-85;
short var_10 = (short)-31418;
long long int var_14 = 1013899111411603450LL;
int zero = 0;
short var_17 = (short)-12317;
unsigned short var_18 = (unsigned short)50707;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
