#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10963740670984754143ULL;
int var_4 = 1644542282;
short var_6 = (short)-8867;
signed char var_8 = (signed char)-90;
unsigned long long int var_14 = 12259806601736139627ULL;
int zero = 0;
long long int var_17 = -8252259058637313939LL;
unsigned int var_18 = 1509610779U;
unsigned char var_19 = (unsigned char)60;
short var_20 = (short)-29358;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
