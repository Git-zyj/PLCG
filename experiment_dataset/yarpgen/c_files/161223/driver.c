#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8692768536563057441LL;
signed char var_7 = (signed char)-98;
long long int var_9 = -2322892248271100445LL;
unsigned short var_19 = (unsigned short)39306;
int zero = 0;
long long int var_20 = 1679208147413052159LL;
unsigned short var_21 = (unsigned short)562;
unsigned long long int var_22 = 434877843135394917ULL;
int var_23 = 326463470;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
