#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7398773794074026618ULL;
unsigned short var_6 = (unsigned short)20507;
unsigned char var_9 = (unsigned char)205;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16813886806596686034ULL;
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
