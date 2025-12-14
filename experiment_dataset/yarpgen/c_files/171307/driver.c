#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8657747786370505135LL;
int var_1 = -2080266441;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11195389548126065242ULL;
unsigned long long int var_4 = 15029166724513579680ULL;
signed char var_5 = (signed char)110;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)112;
signed char var_9 = (signed char)24;
unsigned long long int var_10 = 1035728100783522163ULL;
unsigned char var_12 = (unsigned char)218;
int zero = 0;
short var_14 = (short)-7524;
unsigned long long int var_15 = 12980518082246694028ULL;
long long int var_16 = 1625980121945234306LL;
unsigned long long int var_17 = 15174833399334729871ULL;
void init() {
}

void checksum() {
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
