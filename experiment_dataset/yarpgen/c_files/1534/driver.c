#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4042257299U;
long long int var_2 = 2836846481057055138LL;
signed char var_4 = (signed char)120;
short var_7 = (short)-17429;
unsigned long long int var_8 = 10563642788293460834ULL;
int zero = 0;
unsigned long long int var_10 = 13604200910704977041ULL;
signed char var_11 = (signed char)-77;
long long int var_12 = 4929031566557042393LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
