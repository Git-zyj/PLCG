#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)18877;
unsigned char var_5 = (unsigned char)22;
long long int var_7 = -4216097178275075530LL;
long long int var_8 = 2875155771801812134LL;
unsigned char var_9 = (unsigned char)53;
unsigned char var_10 = (unsigned char)46;
short var_11 = (short)-21322;
signed char var_12 = (signed char)-56;
int zero = 0;
short var_13 = (short)31379;
short var_14 = (short)489;
short var_15 = (short)-14939;
long long int var_16 = 7405504579436621967LL;
void init() {
}

void checksum() {
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
