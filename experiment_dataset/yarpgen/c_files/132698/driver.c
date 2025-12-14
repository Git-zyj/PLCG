#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned char var_4 = (unsigned char)78;
unsigned long long int var_7 = 4738513176745249194ULL;
unsigned short var_10 = (unsigned short)26051;
unsigned long long int var_12 = 14215219389018272974ULL;
int zero = 0;
unsigned int var_20 = 847575184U;
unsigned int var_21 = 4237645724U;
signed char var_22 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
