#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7946223717385065424ULL;
unsigned short var_2 = (unsigned short)45845;
long long int var_3 = 7942995653498937611LL;
long long int var_5 = 7649936832292370860LL;
long long int var_11 = 5802485712818775596LL;
int zero = 0;
short var_17 = (short)15125;
short var_18 = (short)13963;
signed char var_19 = (signed char)-60;
long long int var_20 = 7306603985974544253LL;
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
