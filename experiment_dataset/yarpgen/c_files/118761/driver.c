#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
unsigned char var_3 = (unsigned char)13;
signed char var_4 = (signed char)-80;
unsigned char var_6 = (unsigned char)14;
short var_7 = (short)-15780;
long long int var_9 = -4312456789609208656LL;
signed char var_10 = (signed char)66;
int zero = 0;
signed char var_13 = (signed char)-63;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8536689474930905834LL;
short var_16 = (short)-14998;
unsigned char var_17 = (unsigned char)89;
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
