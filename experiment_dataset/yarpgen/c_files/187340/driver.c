#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned int var_3 = 2408913715U;
unsigned long long int var_4 = 7695360351345482059ULL;
signed char var_6 = (signed char)-44;
unsigned long long int var_8 = 15044821445851006336ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-19968;
unsigned long long int var_12 = 2583346157944744325ULL;
unsigned long long int var_14 = 17599256733351855179ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 2527514594120546859ULL;
long long int var_17 = 4327887994449822282LL;
unsigned long long int var_18 = 13791447535847187344ULL;
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
