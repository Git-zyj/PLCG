#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-47;
unsigned long long int var_4 = 12343396287976753039ULL;
long long int var_5 = -13321814934302606LL;
long long int var_9 = 7707973746044447057LL;
int zero = 0;
unsigned long long int var_12 = 6887643015555367252ULL;
unsigned short var_13 = (unsigned short)41392;
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
