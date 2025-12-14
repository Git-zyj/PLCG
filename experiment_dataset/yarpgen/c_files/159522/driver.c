#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1849611075;
short var_2 = (short)4190;
short var_4 = (short)-2701;
long long int var_8 = -2238054883201070782LL;
unsigned long long int var_9 = 4151592404468138722ULL;
unsigned char var_11 = (unsigned char)121;
int zero = 0;
signed char var_13 = (signed char)87;
unsigned short var_14 = (unsigned short)49851;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
