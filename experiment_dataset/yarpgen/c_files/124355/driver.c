#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3785;
unsigned short var_3 = (unsigned short)18339;
short var_4 = (short)-30654;
unsigned int var_15 = 2946402749U;
int zero = 0;
long long int var_20 = 2713890267597581055LL;
short var_21 = (short)-25659;
short var_22 = (short)-26847;
void init() {
}

void checksum() {
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
