#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8983103581777653130LL;
unsigned long long int var_3 = 16167040458452049707ULL;
_Bool var_5 = (_Bool)1;
long long int var_11 = -2639540679691320079LL;
unsigned short var_16 = (unsigned short)25262;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)4441;
unsigned short var_20 = (unsigned short)57606;
void init() {
}

void checksum() {
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
