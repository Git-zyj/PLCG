#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20089;
unsigned long long int var_1 = 15548241735114168306ULL;
short var_2 = (short)17248;
long long int var_3 = 2916920008066829665LL;
short var_4 = (short)-27384;
long long int var_5 = -7753263187783375328LL;
short var_6 = (short)19964;
short var_7 = (short)-12838;
short var_8 = (short)-4980;
short var_9 = (short)-4890;
long long int var_10 = 3447792790075183584LL;
short var_11 = (short)22223;
short var_12 = (short)-3265;
int zero = 0;
unsigned long long int var_13 = 7658297632222726101ULL;
unsigned long long int var_14 = 17912546297732615274ULL;
short var_15 = (short)21989;
short var_16 = (short)21744;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
