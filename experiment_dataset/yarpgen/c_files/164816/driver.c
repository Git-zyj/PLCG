#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5822;
unsigned short var_5 = (unsigned short)34980;
short var_12 = (short)-28630;
short var_13 = (short)17843;
unsigned long long int var_15 = 10824992357963170385ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)59441;
signed char var_19 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
