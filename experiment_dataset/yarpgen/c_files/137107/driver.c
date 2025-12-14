#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8681933430718151760ULL;
unsigned char var_9 = (unsigned char)128;
unsigned long long int var_11 = 17725701966024009447ULL;
long long int var_12 = 1221347661885899081LL;
int zero = 0;
short var_16 = (short)-32191;
long long int var_17 = -8709464185018364696LL;
long long int var_18 = -685910083830504454LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
