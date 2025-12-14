#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3231346908399782294LL;
unsigned short var_1 = (unsigned short)41897;
unsigned char var_2 = (unsigned char)141;
unsigned long long int var_8 = 9862521790724855613ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6740319479828858557LL;
void init() {
}

void checksum() {
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
