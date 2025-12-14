#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30223;
long long int var_1 = 7875103417931991184LL;
unsigned char var_4 = (unsigned char)214;
signed char var_7 = (signed char)-118;
unsigned long long int var_8 = 2793995304794957128ULL;
long long int var_11 = -4729102299739008206LL;
int zero = 0;
unsigned long long int var_13 = 13665360503662193645ULL;
_Bool var_14 = (_Bool)0;
int var_15 = -1013274565;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
