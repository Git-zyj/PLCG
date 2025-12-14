#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
int var_3 = 1655535624;
int var_5 = 502630602;
signed char var_6 = (signed char)-4;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-28496;
long long int var_11 = -119456515967489248LL;
unsigned char var_12 = (unsigned char)130;
signed char var_13 = (signed char)105;
int zero = 0;
long long int var_18 = -7637748648152485027LL;
unsigned long long int var_19 = 12689986331643553670ULL;
long long int var_20 = 1484343169253206297LL;
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
