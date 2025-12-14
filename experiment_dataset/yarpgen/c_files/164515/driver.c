#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18157149904564369724ULL;
unsigned short var_2 = (unsigned short)55656;
unsigned long long int var_3 = 9849245921184969736ULL;
unsigned long long int var_4 = 8381270016756634515ULL;
signed char var_5 = (signed char)-80;
long long int var_7 = -4068227640759039960LL;
unsigned int var_8 = 1156280609U;
unsigned short var_10 = (unsigned short)30193;
long long int var_12 = -3570511897150886321LL;
int zero = 0;
unsigned short var_15 = (unsigned short)49014;
unsigned int var_16 = 332808975U;
void init() {
}

void checksum() {
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
