#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10605008556182591616ULL;
unsigned long long int var_4 = 2134148072571185460ULL;
unsigned long long int var_7 = 12309078907838958090ULL;
unsigned long long int var_8 = 4272097855215234362ULL;
unsigned long long int var_9 = 16425888962578760612ULL;
unsigned long long int var_10 = 12504198240717596875ULL;
unsigned long long int var_12 = 7027351218641857392ULL;
unsigned long long int var_13 = 7144132468578404578ULL;
int zero = 0;
unsigned long long int var_14 = 15741633534812873122ULL;
unsigned long long int var_15 = 10695569520423788822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
