#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1266559693353142878ULL;
long long int var_3 = -1295962965557768941LL;
signed char var_7 = (signed char)27;
signed char var_10 = (signed char)-44;
int zero = 0;
unsigned int var_18 = 3261687387U;
long long int var_19 = -5245595083710815499LL;
signed char var_20 = (signed char)71;
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
