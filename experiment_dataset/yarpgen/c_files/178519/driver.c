#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35464;
long long int var_4 = 3087290357680482884LL;
unsigned long long int var_5 = 17393942254354084841ULL;
unsigned short var_6 = (unsigned short)41322;
unsigned long long int var_7 = 12127033597223041854ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)54536;
short var_12 = (short)-29240;
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
