#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6555231189492438579LL;
signed char var_8 = (signed char)-57;
unsigned int var_9 = 4141432785U;
int var_11 = -364008331;
unsigned long long int var_13 = 13180709207034793933ULL;
unsigned long long int var_14 = 17234893951147262407ULL;
long long int var_15 = -5938996923209857183LL;
int zero = 0;
unsigned int var_17 = 592731588U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
