#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1217880215593913352LL;
long long int var_5 = -2827342328411545937LL;
long long int var_7 = -5529726473185751609LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -3651932774781605378LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_16 = -5678335938236861679LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8281544336200349863LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
