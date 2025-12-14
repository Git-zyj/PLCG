#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1107282925;
unsigned long long int var_4 = 4500905135690270469ULL;
short var_5 = (short)-14394;
unsigned char var_6 = (unsigned char)60;
long long int var_9 = 4088198560938107830LL;
long long int var_12 = -2577101698127669669LL;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
unsigned int var_18 = 3748527327U;
unsigned char var_19 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
