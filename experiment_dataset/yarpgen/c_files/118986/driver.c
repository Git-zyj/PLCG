#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4844095764130320883ULL;
signed char var_4 = (signed char)-110;
unsigned short var_7 = (unsigned short)1576;
int var_8 = 2093565650;
long long int var_10 = 6007894438456942694LL;
short var_11 = (short)-30490;
short var_12 = (short)-3223;
int zero = 0;
unsigned short var_16 = (unsigned short)56024;
unsigned char var_17 = (unsigned char)117;
short var_18 = (short)-19646;
signed char var_19 = (signed char)10;
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
