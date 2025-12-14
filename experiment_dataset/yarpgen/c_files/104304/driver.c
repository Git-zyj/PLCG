#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8649030723386187043LL;
unsigned short var_7 = (unsigned short)35578;
unsigned char var_8 = (unsigned char)35;
long long int var_9 = 4756180230875013111LL;
int zero = 0;
long long int var_10 = -3238904454390332227LL;
unsigned short var_11 = (unsigned short)50529;
unsigned short var_12 = (unsigned short)17165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
