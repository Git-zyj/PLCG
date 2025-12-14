#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5421033004371804019ULL;
long long int var_7 = -1185932037815090452LL;
short var_13 = (short)-19609;
unsigned int var_16 = 732030666U;
int zero = 0;
long long int var_17 = 4136691833308793592LL;
int var_18 = -760430871;
void init() {
}

void checksum() {
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
