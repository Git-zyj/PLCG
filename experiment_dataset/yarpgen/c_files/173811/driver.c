#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned long long int var_3 = 2551433552359901334ULL;
long long int var_5 = 5146634225483145788LL;
short var_8 = (short)29848;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 4722664910212293736ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6403920538520064756ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
