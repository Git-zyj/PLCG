#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-38;
long long int var_3 = -4340746266327199960LL;
unsigned long long int var_4 = 13598017971709896267ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)62;
int zero = 0;
short var_10 = (short)-29551;
signed char var_11 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
