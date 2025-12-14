#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7733227287313854181LL;
unsigned char var_1 = (unsigned char)32;
unsigned char var_6 = (unsigned char)239;
unsigned short var_9 = (unsigned short)43645;
int zero = 0;
long long int var_11 = -8052782671735205097LL;
long long int var_12 = 4918161732015974906LL;
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
