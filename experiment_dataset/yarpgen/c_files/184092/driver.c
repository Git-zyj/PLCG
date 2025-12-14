#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4715640570908417414LL;
unsigned short var_5 = (unsigned short)39897;
unsigned int var_6 = 834789356U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -170839624;
unsigned long long int var_11 = 18441413979114626637ULL;
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
