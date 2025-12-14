#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
unsigned long long int var_1 = 8312442835863153725ULL;
unsigned int var_3 = 4007286460U;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)50077;
unsigned char var_9 = (unsigned char)14;
int zero = 0;
signed char var_10 = (signed char)-124;
long long int var_11 = 8353599820012230192LL;
signed char var_12 = (signed char)94;
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
