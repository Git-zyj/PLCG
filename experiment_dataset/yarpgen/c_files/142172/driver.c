#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15877051281860862805ULL;
long long int var_6 = 4729704904749844861LL;
short var_9 = (short)-2567;
long long int var_12 = -15720774488340448LL;
int zero = 0;
long long int var_18 = -2886306546274422065LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)47;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-25516;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
