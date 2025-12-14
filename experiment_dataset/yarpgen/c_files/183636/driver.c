#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
int var_1 = -1831494459;
unsigned long long int var_3 = 6053577714468020442ULL;
signed char var_4 = (signed char)59;
long long int var_6 = -1082181626451891256LL;
unsigned long long int var_7 = 1549390611426738979ULL;
short var_9 = (short)17919;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)55;
unsigned char var_12 = (unsigned char)130;
unsigned int var_13 = 3339687975U;
int var_14 = -1957209441;
unsigned long long int var_18 = 8620749017567237076ULL;
int zero = 0;
short var_19 = (short)19736;
unsigned long long int var_20 = 1542644157793001348ULL;
signed char var_21 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
