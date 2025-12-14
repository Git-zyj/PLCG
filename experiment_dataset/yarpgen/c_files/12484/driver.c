#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15670;
short var_1 = (short)8345;
short var_3 = (short)147;
long long int var_4 = 1208550846585180923LL;
signed char var_5 = (signed char)-85;
unsigned short var_6 = (unsigned short)6924;
signed char var_8 = (signed char)91;
short var_9 = (short)-29054;
unsigned char var_10 = (unsigned char)121;
unsigned short var_11 = (unsigned short)29633;
int zero = 0;
long long int var_12 = -4499908573608144360LL;
unsigned long long int var_13 = 6905412074498914130ULL;
short var_14 = (short)-16680;
short var_15 = (short)25309;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
