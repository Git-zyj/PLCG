#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5164;
unsigned long long int var_1 = 16224918156245969211ULL;
unsigned short var_3 = (unsigned short)12218;
int var_4 = 1742553621;
short var_6 = (short)11552;
unsigned long long int var_10 = 10861134405955035673ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-15276;
unsigned char var_18 = (unsigned char)220;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3146233763804249127LL;
unsigned char var_21 = (unsigned char)156;
unsigned char var_22 = (unsigned char)118;
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
