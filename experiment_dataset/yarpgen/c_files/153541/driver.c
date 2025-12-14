#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16671744604977306357ULL;
unsigned short var_2 = (unsigned short)22437;
signed char var_3 = (signed char)-37;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)28780;
unsigned int var_8 = 3872181470U;
signed char var_9 = (signed char)-121;
int zero = 0;
unsigned int var_10 = 1092281413U;
int var_11 = 990081496;
unsigned long long int var_12 = 9207190589763736292ULL;
unsigned char var_13 = (unsigned char)181;
short var_14 = (short)17909;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
