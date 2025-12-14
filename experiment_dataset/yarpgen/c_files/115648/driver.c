#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1907784745;
unsigned short var_2 = (unsigned short)49670;
unsigned long long int var_4 = 7513060152191513685ULL;
unsigned char var_5 = (unsigned char)131;
int var_6 = 1725915280;
long long int var_9 = -8116577230470523713LL;
int zero = 0;
unsigned int var_10 = 3163255682U;
unsigned short var_11 = (unsigned short)18348;
unsigned short var_12 = (unsigned short)457;
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
