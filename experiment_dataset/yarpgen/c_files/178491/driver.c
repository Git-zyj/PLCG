#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4449064517390296908ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1458746459U;
long long int var_5 = 8776365237661521334LL;
unsigned long long int var_6 = 16599981880073204110ULL;
unsigned long long int var_8 = 17528723259959200010ULL;
unsigned long long int var_9 = 3465915411890216977ULL;
int zero = 0;
long long int var_11 = -1187613714817967150LL;
long long int var_12 = 343035033482807015LL;
unsigned int var_13 = 3494719842U;
unsigned long long int var_14 = 5662604038514738412ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
