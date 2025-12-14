#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5820279905569624293ULL;
long long int var_7 = -7409062161076224496LL;
long long int var_9 = 3255120343937539271LL;
unsigned int var_10 = 3678135994U;
long long int var_13 = 8179254587776932248LL;
signed char var_14 = (signed char)-55;
int zero = 0;
long long int var_18 = -6412410153162235465LL;
short var_19 = (short)31147;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
