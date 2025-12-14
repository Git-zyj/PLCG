#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2532302195U;
long long int var_2 = 1254037104008103181LL;
unsigned short var_3 = (unsigned short)56472;
unsigned long long int var_6 = 14329238810899178604ULL;
unsigned char var_7 = (unsigned char)11;
unsigned long long int var_9 = 4091000679742253964ULL;
unsigned short var_10 = (unsigned short)20945;
unsigned long long int var_13 = 16839202346388502917ULL;
unsigned long long int var_15 = 10498613839773109754ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)57179;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
