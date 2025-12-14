#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12729;
unsigned short var_1 = (unsigned short)42590;
short var_2 = (short)32733;
signed char var_3 = (signed char)85;
long long int var_8 = -4826153211910980311LL;
unsigned char var_9 = (unsigned char)156;
int var_10 = 438807663;
unsigned char var_11 = (unsigned char)139;
unsigned short var_12 = (unsigned short)29893;
unsigned short var_15 = (unsigned short)51114;
long long int var_16 = -3419781320216308508LL;
unsigned char var_17 = (unsigned char)194;
int zero = 0;
long long int var_18 = -8813342444245155670LL;
long long int var_19 = 3902514986288556516LL;
long long int var_20 = -5899126574066689835LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
