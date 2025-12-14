#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27279;
unsigned char var_3 = (unsigned char)229;
unsigned char var_4 = (unsigned char)225;
short var_5 = (short)-15757;
short var_6 = (short)-3588;
int var_8 = 1658500871;
long long int var_9 = -6773469113905280879LL;
unsigned char var_12 = (unsigned char)134;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_17 = 8311581929070476625LL;
signed char var_18 = (signed char)-93;
unsigned short var_19 = (unsigned short)22502;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
