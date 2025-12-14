#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4259981768562095869LL;
unsigned long long int var_6 = 15707793288536874986ULL;
unsigned short var_11 = (unsigned short)16110;
int zero = 0;
long long int var_17 = 2779811738024795347LL;
unsigned char var_18 = (unsigned char)72;
signed char var_19 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
