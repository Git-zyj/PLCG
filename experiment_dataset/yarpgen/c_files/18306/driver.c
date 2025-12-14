#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1404363604U;
unsigned int var_2 = 2639531262U;
unsigned int var_4 = 381651290U;
unsigned long long int var_8 = 9532702790695360108ULL;
unsigned long long int var_9 = 14242424924694691607ULL;
unsigned long long int var_10 = 7773341953218359910ULL;
unsigned int var_11 = 3508498746U;
short var_14 = (short)10832;
short var_15 = (short)-11678;
unsigned long long int var_18 = 5374814699591193534ULL;
int zero = 0;
short var_19 = (short)-28730;
unsigned long long int var_20 = 6739990817948299462ULL;
unsigned int var_21 = 2569246809U;
unsigned int var_22 = 1063408534U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
