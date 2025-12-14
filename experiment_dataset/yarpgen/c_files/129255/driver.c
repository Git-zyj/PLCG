#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12680;
unsigned short var_6 = (unsigned short)13357;
long long int var_8 = -1829046809142131082LL;
unsigned short var_9 = (unsigned short)8052;
int var_12 = -337047883;
long long int var_13 = 9173203488177431450LL;
int zero = 0;
long long int var_14 = -4604739556261376492LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
