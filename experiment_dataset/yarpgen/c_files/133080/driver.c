#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62767;
unsigned long long int var_4 = 7614523409835705044ULL;
unsigned char var_7 = (unsigned char)118;
int zero = 0;
long long int var_19 = 5677697390093794411LL;
unsigned char var_20 = (unsigned char)193;
unsigned long long int var_21 = 3930964997960798110ULL;
unsigned char var_22 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
