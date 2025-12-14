#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2070413457;
signed char var_4 = (signed char)-70;
unsigned char var_5 = (unsigned char)121;
signed char var_6 = (signed char)55;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 7853747434281771627ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4099453616995017183ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
