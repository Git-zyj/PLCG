#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 4068931380407734531ULL;
int var_9 = 866210370;
signed char var_15 = (signed char)112;
int zero = 0;
unsigned short var_20 = (unsigned short)16777;
unsigned long long int var_21 = 15354494634593648433ULL;
unsigned short var_22 = (unsigned short)52408;
unsigned char var_23 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
