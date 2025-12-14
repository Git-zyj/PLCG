#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned long long int var_2 = 2610939392361148470ULL;
int var_7 = 194835987;
unsigned long long int var_9 = 8495683441681437697ULL;
short var_11 = (short)11674;
unsigned long long int var_14 = 11362985841163533523ULL;
int zero = 0;
short var_16 = (short)-2758;
unsigned short var_17 = (unsigned short)26584;
int var_18 = 331281143;
long long int var_19 = -7652674565907985203LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
