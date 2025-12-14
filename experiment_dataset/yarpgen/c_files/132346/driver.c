#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12434875014454313349ULL;
unsigned long long int var_2 = 6123305686931711732ULL;
unsigned char var_4 = (unsigned char)117;
long long int var_8 = -2437886896026648403LL;
unsigned char var_9 = (unsigned char)206;
unsigned short var_10 = (unsigned short)10408;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-17801;
signed char var_14 = (signed char)-67;
long long int var_15 = 3311635437212458090LL;
int zero = 0;
signed char var_17 = (signed char)21;
unsigned int var_18 = 4128175683U;
long long int var_19 = -948609965707581458LL;
short var_20 = (short)-21220;
long long int var_21 = -532312949151723938LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
