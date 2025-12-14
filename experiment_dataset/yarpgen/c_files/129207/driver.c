#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1345911165U;
unsigned long long int var_2 = 17192482102474869329ULL;
unsigned char var_3 = (unsigned char)31;
int var_4 = 1566681799;
long long int var_5 = -6222907508465897216LL;
unsigned long long int var_9 = 2093380117428568635ULL;
long long int var_11 = 5342481285029640610LL;
signed char var_12 = (signed char)-10;
int zero = 0;
int var_13 = 443854927;
unsigned char var_14 = (unsigned char)149;
_Bool var_15 = (_Bool)0;
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
