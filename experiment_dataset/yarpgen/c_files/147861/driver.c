#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
signed char var_1 = (signed char)27;
long long int var_2 = -7233830790515873283LL;
int var_6 = -916837095;
unsigned int var_10 = 571163923U;
unsigned long long int var_11 = 17773969603677793185ULL;
long long int var_12 = 647581211853815998LL;
unsigned int var_17 = 3131156677U;
int zero = 0;
int var_18 = 997540809;
unsigned int var_19 = 2422073948U;
int var_20 = -14002947;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
