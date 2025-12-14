#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18153800265119156793ULL;
unsigned char var_2 = (unsigned char)138;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-10949;
int zero = 0;
signed char var_20 = (signed char)78;
unsigned long long int var_21 = 9388465701004350030ULL;
unsigned long long int var_22 = 6553063182605188857ULL;
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
