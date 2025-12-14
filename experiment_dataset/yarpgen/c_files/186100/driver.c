#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11045385768690472233ULL;
unsigned short var_9 = (unsigned short)43905;
_Bool var_13 = (_Bool)0;
long long int var_18 = 5118001046911162850LL;
long long int var_19 = -7277687417057665780LL;
int zero = 0;
unsigned long long int var_20 = 5123804711076754490ULL;
unsigned short var_21 = (unsigned short)50475;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
