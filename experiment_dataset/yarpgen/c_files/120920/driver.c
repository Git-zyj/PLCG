#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1664244075143797768LL;
unsigned long long int var_5 = 2253176423832119183ULL;
signed char var_6 = (signed char)-54;
unsigned long long int var_9 = 8656883701641783609ULL;
int var_10 = -298771011;
signed char var_11 = (signed char)-25;
signed char var_12 = (signed char)-127;
unsigned short var_14 = (unsigned short)48555;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 15572934061232037050ULL;
long long int var_18 = 7625678823740534596LL;
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
